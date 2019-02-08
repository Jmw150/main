;; -*- mode: Scheme; -*-
;;
;; This file is part of WebKit for CHICKEN
;; Copyright (c) 2011 by Thomas Chust.  All rights reserved.
;;
;; Permission is hereby granted, free of charge, to any person
;; obtaining a copy of this software and associated documentation
;; files (the Software), to deal in the Software without restriction,
;; including without limitation the rights to use, copy, modify,
;; merge, publish, distribute, sublicense, and/or sell copies of the
;; Software, and to permit persons to whom the Software is furnished
;; to do so, subject to the following conditions:
;; 
;; The above copyright notice and this permission notice shall be
;; included in all copies or substantial portions of the Software.
;; 
;; THE SOFTWARE IS PROVIDED ASIS, WITHOUT WARRANTY OF ANY KIND,
;; EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
;; MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
;; NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
;; BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
;; ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
;; CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
;; SOFTWARE.

(foreign-declare
 "#include <locale.h>")

(call-with-values argc+argv
  (foreign-lambda*
   bool ((int argc) ((c-pointer c-string) argv))
   "gtk_init(&argc, &argv);"
   "setlocale(LC_NUMERIC, \"C\");"))

(define current-timeout
  (make-parameter #f))

(define-external (scheme_yield_timeout (c-pointer data)) bool
  (cond
   ((current-timeout)
    => (lambda (timeout)
	 (when (< (time->seconds timeout) (time->seconds (current-time)))
	   (current-timeout #f)
	   (main-loop-quit!)))))
  (thread-yield!)
  (unless (> ((foreign-lambda*
	       unsigned-int ()
	       "GList *windows = gtk_window_list_toplevels();"
	       "guint length = g_list_length(windows);"
	       "g_list_free(windows);"
	       "C_return(length);"))
	     1)
    (main-loop-quit!))
  #t)

(define install-yield+timeout!
  (let ((mutex (make-mutex 'yield+timeout)))
    (mutex-specific-set! mutex (cons #f #f))
    (lambda (interval)
      (mutex-lock! mutex)
      (let-values (((id old-interval) (car+cdr (mutex-specific mutex))))
	(unless (eqv? interval old-interval)
	  (when id
	    ((foreign-lambda bool "g_source_remove" unsigned-int) id))
	  (mutex-specific-set!
	   mutex
	   (cons
	    ((foreign-lambda*
	      unsigned-int ((unsigned-int interval))
	      "C_return(g_timeout_add(interval, scheme_yield_timeout, NULL));")
	     (inexact->exact (* interval 1000)))
	    interval))))
      (mutex-unlock! mutex))))

(define current-main-loop-level
  (foreign-lambda unsigned-int "gtk_main_level"))

(define (main-loop #!optional (yield-interval 0.5) (timeout #f))
  (install-yield+timeout! yield-interval)
  (parameterize ((current-timeout
		  (and timeout
		       (if (time? timeout)
			   timeout
			   (seconds->time
			    (+ (time->seconds (current-time)) timeout))))))
    ((foreign-safe-lambda void "gtk_main"))
    (or (not timeout) (and (current-timeout) #t))))

(define main-loop-quit!
  (foreign-lambda void "gtk_main_quit"))

#>
typedef struct SchemeWebViewContext {
  GtkWindow *window;
  GtkScrolledWindow *scrolled;
  GtkLabel *status;
  JSContextRef oldctx;
  void *root;
} SchemeWebViewContext;

static SchemeWebViewContext *scheme_web_view_context_new(C_word init) {
  SchemeWebViewContext *context = g_slice_new(SchemeWebViewContext);

  context->window = GTK_WINDOW(gtk_window_new(GTK_WINDOW_TOPLEVEL));
  context->scrolled = GTK_SCROLLED_WINDOW(gtk_scrolled_window_new(NULL, NULL));
  context->status = GTK_LABEL(gtk_label_new(NULL));
  context->oldctx = NULL;

  if (init != C_SCHEME_FALSE) {
    context->root = CHICKEN_new_gc_root();
    CHICKEN_gc_root_set(context->root, init);
  }
  else
    context->root = NULL;

  return context;
}

static void scheme_web_view_context_free(SchemeWebViewContext *context) {
  if (context->root) CHICKEN_delete_gc_root(context->root);
  g_slice_free(SchemeWebViewContext, context);
}

static SchemeWebViewContext *scheme_web_view_get_context(WebKitWebView *webview) {
  return g_object_get_qdata(G_OBJECT(webview),
			    g_quark_from_static_string("context"));
}

static C_word scheme_web_view_change_context(WebKitWebView *webview, JSContextRef *ctx) {
  SchemeWebViewContext *context = scheme_web_view_get_context(webview);

  JSContextRef newctx = *ctx;
  *ctx = context->oldctx;
  context->oldctx = newctx;

  return (context->root ? CHICKEN_gc_root_ref(context->root) : C_SCHEME_FALSE);
}
<#

(define (scheme-web-view-change-context webview ctx)
  (let-location ((oldctx c-pointer ctx))
    (let ((init ((foreign-lambda
		  scheme-object "scheme_web_view_change_context"
		  webview (c-pointer (const jscontext)))
		 webview (location oldctx))))
      (jscontext-invalidate! oldctx)
      init)))

(define-external (scheme_web_view_cleared
		  (webview webview) (c-pointer frame)
		  (jscontext ctx) (jsobject window)
		  (c-pointer data)) void
  (cond
   ((scheme-web-view-change-context webview ctx)
    => (cut <> (js->value ctx window)))))

(define-external (scheme_web_view_finalize
		  (c-pointer data) ((c-pointer "GObject") webview)) void
  (scheme-web-view-change-context webview #f))

#>
C_externexport void scheme_web_view_cleared(WebKitWebView *, void *, struct OpaqueJSContext *, struct OpaqueJSValue *, void *);
C_externexport void scheme_web_view_finalize(void *, GObject *);

static gboolean scheme_web_view_ready(WebKitWebView *webview,
				      gpointer _data) {
  SchemeWebViewContext *context = scheme_web_view_get_context(webview);
  gtk_widget_show(GTK_WIDGET(context->window));
  return TRUE;
}

static void scheme_web_view_title_changed(WebKitWebView *webview,
					  GParamSpec *pspec,
					  gpointer _data) {
  SchemeWebViewContext *context = scheme_web_view_get_context(webview);
  gtk_window_set_title(context->window,
		       (webkit_web_view_get_title(webview) ?: ""));
}

static void scheme_web_view_status_text_changed(WebKitWebView *webview,
						const gchar *text,
						gpointer _data) {
  SchemeWebViewContext *context = scheme_web_view_get_context(webview);
  gtk_label_set_text(context->status,
		     (text ?: ""));
}

static void scheme_window_features_size_changed(WebKitWebWindowFeatures *features,
						GParamSpec *pspec,
						gpointer webview) {
  SchemeWebViewContext *context = scheme_web_view_get_context(WEBKIT_WEB_VIEW(webview));
  gint width = -1, height = -1;
  g_object_get(features, "width", &width, "height", &height, NULL);
  gtk_window_set_default_size(context->window, width, height);
}

static void scheme_window_features_scrollbar_visible_changed(WebKitWebWindowFeatures *features,
							     GParamSpec *pspec,
							     gpointer webview) {
  SchemeWebViewContext *context = scheme_web_view_get_context(WEBKIT_WEB_VIEW(webview));
  gboolean state = FALSE;
  g_object_get(features, "scrollbar-visible", &state, NULL);
  GtkPolicyType policy = (state ? GTK_POLICY_AUTOMATIC : GTK_POLICY_NEVER);
  gtk_scrolled_window_set_policy(context->scrolled, policy, policy);
}

static void scheme_window_features_status_visible_changed(WebKitWebWindowFeatures *features,
							  GParamSpec *pspec,
							  gpointer webview) {
  SchemeWebViewContext *context = scheme_web_view_get_context(WEBKIT_WEB_VIEW(webview));
  gboolean state = FALSE;
  g_object_get(features, "statusbar-visible", &state, NULL);
  if (state)
    gtk_widget_show(GTK_WIDGET(context->status));
  else
    gtk_widget_hide(GTK_WIDGET(context->status));
}

static void scheme_window_features_fullscreen_changed(WebKitWebWindowFeatures *features,
						      GParamSpec *pspec,
						      gpointer webview) {
  SchemeWebViewContext *context = scheme_web_view_get_context(WEBKIT_WEB_VIEW(webview));
  gboolean state = FALSE;
  g_object_get(features, "fullscreen", &state, NULL);
  if (state)
    gtk_window_fullscreen(context->window);
  else
    gtk_window_unfullscreen(context->window);
}

static void scheme_web_view_window_features_changed(WebKitWebView *webview,
						    GParamSpec *pspec,
						    gpointer _data) {
  WebKitWebWindowFeatures *features = webkit_web_view_get_window_features(webview);

  scheme_window_features_size_changed(features, pspec, webview);
  scheme_window_features_scrollbar_visible_changed(features, pspec, webview);
  scheme_window_features_status_visible_changed(features, pspec, webview);
  scheme_window_features_fullscreen_changed(features, pspec, webview);

  g_object_connect(features,
		   "object-signal::notify::width",
		   scheme_window_features_size_changed, webview,
		   "object-signal::notify::height",
		   scheme_window_features_size_changed, webview,
		   "object-signal::notify::scrollbar-visible",
		   scheme_window_features_scrollbar_visible_changed, webview,
		   "object-signal::notify::statusbar-visible",
		   scheme_window_features_status_visible_changed, webview,
		   "object-signal::notify::fullscreen",
		   scheme_window_features_fullscreen_changed, webview,
		   NULL);
}

static WebKitWebView *scheme_web_view_new(WebKitWebView *webview,
					  WebKitWebFrame *frame,
					  gpointer init);

static WebKitWebView *scheme_web_inspector_inspect_view(WebKitWebInspector *webinspector,
							WebKitWebView *webview,
							gpointer _data) {
  return scheme_web_view_new(webview, webkit_web_view_get_main_frame(webview), _data);
}

static gboolean scheme_web_inspector_show_window(WebKitWebInspector *webinspector,
						 gpointer _data) {
  return scheme_web_view_ready(webkit_web_inspector_get_web_view(webinspector), _data);
}

static gboolean scheme_web_inspector_close_window(WebKitWebInspector *webinspector,
						  gpointer _data) {
  SchemeWebViewContext *context = scheme_web_view_get_context(webkit_web_inspector_get_web_view(webinspector));
  gtk_widget_destroy(GTK_WIDGET(context->window));
  return TRUE;
}

static WebKitWebView *scheme_web_view_new(WebKitWebView *webview,
					  WebKitWebFrame *frame,
					  gpointer init) {
  SchemeWebViewContext *context = scheme_web_view_context_new((C_word)init);
  GtkBox *content = GTK_BOX(gtk_vbox_new(FALSE, 0));
  webview = WEBKIT_WEB_VIEW(webkit_web_view_new());
  
  g_object_set_qdata_full(G_OBJECT(webview),
			  g_quark_from_static_string("context"),
			  context,
			  (GDestroyNotify)scheme_web_view_context_free);
  
  gtk_widget_show(GTK_WIDGET(webview));
  gtk_container_add(GTK_CONTAINER(context->scrolled), GTK_WIDGET(webview));
  gtk_widget_show(GTK_WIDGET(context->scrolled));
  gtk_box_pack_start(content, GTK_WIDGET(context->scrolled), TRUE, TRUE, 0);
  gtk_box_pack_start(content, GTK_WIDGET(context->status), FALSE, FALSE, 0);
  gtk_widget_show(GTK_WIDGET(content));
  gtk_container_add(GTK_CONTAINER(context->window), GTK_WIDGET(content));
  
  g_object_connect(webview,
		   "signal::window-object-cleared",
		   scheme_web_view_cleared, NULL,
		   "signal::web-view-ready",
		   scheme_web_view_ready, NULL,
		   "signal::notify::title",
		   scheme_web_view_title_changed, NULL,
		   "signal::status-bar-text-changed",
		   scheme_web_view_status_text_changed, NULL,
		   "signal::notify::window-features",
		   scheme_web_view_window_features_changed, NULL,
		   "signal::create-web-view",
		   scheme_web_view_new, (gpointer)C_SCHEME_FALSE,
		   NULL);

  WebKitWebInspector *webinspector = webkit_web_view_get_inspector(webview);
  if (webinspector)
    g_object_connect(webinspector,
                     "signal::inspect-web-view",
		     scheme_web_inspector_inspect_view, (gpointer)C_SCHEME_FALSE,
		     "signal::show-window",
		     scheme_web_inspector_show_window, NULL,
		     "signal::close-window",
		     scheme_web_inspector_close_window, NULL,
		     NULL);

  g_object_weak_ref(G_OBJECT(webview), scheme_web_view_finalize, NULL);

  return WEBKIT_WEB_VIEW(webview);
}
<#

(define (make-window
	 uri/content #!key
	 (universal-access-from-file-uris? #f)
	 (file-access-from-file-uris? #t)
	 (spell-checking? #t)
	 (clipboard-access? #f)
	 (developer-extras? #f)
	 (width -1) (height -1)
	 (scrollbar-visible? #t)
	 (status-visible? #t)
	 (fullscreen? #f)
	 (initialize! #f)
	 (yield-interval 0.5)
	 (timeout #f))
  (letrec ((window
	    #f)
	   (webview
	    ((foreign-lambda*
	      webview ((scheme-object init)
		       (bool universal_access_from_file_uris)
		       (bool file_access_from_file_uris)
		       (bool spell_checking)
		       (bool clipboard_access)
		       (bool developer_extras)
		       (int width) (int height)
		       (bool scrollbar_visible)
		       (bool status_visible)
		       (bool fullscreen))
	      "WebKitWebView *webview = scheme_web_view_new(NULL, NULL, (gpointer)init);\n"
	      "WebKitWebSettings *settings = webkit_web_settings_new();\n"
	      "g_object_set(settings,\n"
	      "             \"enable-universal-access-from-file-uris\","
	      "             universal_access_from_file_uris,\n"
	      "             \"enable-file-access-from-file-uris\","
	      "             file_access_from_file_uris,\n"
	      "             \"enable-fullscreen\","
	      "             TRUE,"
	      "             \"enable-spell-checking\","
	      "             spell_checking,\n"
	      "             \"javascript-can-access-clipboard\","
	      "             clipboard_access,\n"
	      "             \"enable-dom-paste\","
	      "             clipboard_access,\n"
	      "             \"enable-developer-extras\","
	      "             developer_extras,\n"
	      "             NULL);\n"
	      "webkit_web_view_set_settings(webview, settings);\n"
	      "g_object_unref(settings);\n"
	      "WebKitWebWindowFeatures *features = webkit_web_window_features_new();\n"
	      "g_object_set(features,\n"
	      "             \"width\", width, \"height\", height,\n"
	      "             \"scrollbar-visible\", scrollbar_visible,\n"
	      "             \"statusbar-visible\", status_visible,\n"
	      "             \"fullscreen\", fullscreen,\n"
	      "             NULL);\n"
	      "g_object_set(webview, \"window-features\", features, NULL);\n"
	      "g_object_unref(features);\n"
	      "C_return(webview);\n")
	     (or initialize!
		 (lambda (w)
		   (set! window w)
		   (main-loop-quit!)))
	     universal-access-from-file-uris?
	     file-access-from-file-uris?
	     spell-checking?
	     clipboard-access?
	     developer-extras?
	     width height
	     scrollbar-visible?
	     status-visible?
	     fullscreen?)))
    (if (list? uri/content)
	((foreign-lambda
	  void "webkit_web_view_load_string"
	  webview nonnull-c-string c-string c-string c-string)
	 webview (car uri/content)
	 (get-keyword #:mime-type (cdr uri/content))
	 (get-keyword #:encoding (cdr uri/content))
	 (get-keyword #:base-uri (cdr uri/content)))
	((foreign-lambda
	  void "webkit_web_view_load_uri"
	  webview nonnull-c-string)
	 webview uri/content))
    ((foreign-lambda
      void "scheme_web_view_ready"
      webview c-pointer)
     webview #f)
    (and (not initialize!)
	 (main-loop yield-interval timeout)
	 window)))
