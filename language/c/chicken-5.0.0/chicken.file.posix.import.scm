;;;; chicken.file.posix.import.scm - GENERATED BY CHICKEN 5.0.0 -*- Scheme -*-

(##sys#register-compiled-module
  'chicken.file.posix
  'posix
  (scheme#list)
  '((create-fifo . chicken.file.posix#create-fifo)
    (create-symbolic-link . chicken.file.posix#create-symbolic-link)
    (read-symbolic-link . chicken.file.posix#read-symbolic-link)
    (duplicate-fileno . chicken.file.posix#duplicate-fileno)
    (fcntl/dupfd . chicken.file.posix#fcntl/dupfd)
    (fcntl/getfd . chicken.file.posix#fcntl/getfd)
    (fcntl/getfl . chicken.file.posix#fcntl/getfl)
    (fcntl/setfd . chicken.file.posix#fcntl/setfd)
    (fcntl/setfl . chicken.file.posix#fcntl/setfl)
    (file-access-time . chicken.file.posix#file-access-time)
    (file-change-time . chicken.file.posix#file-change-time)
    (file-modification-time . chicken.file.posix#file-modification-time)
    (file-close . chicken.file.posix#file-close)
    (file-control . chicken.file.posix#file-control)
    (file-creation-mode . chicken.file.posix#file-creation-mode)
    (file-group . chicken.file.posix#file-group)
    (file-link . chicken.file.posix#file-link)
    (file-lock . chicken.file.posix#file-lock)
    (file-lock/blocking . chicken.file.posix#file-lock/blocking)
    (file-mkstemp . chicken.file.posix#file-mkstemp)
    (file-open . chicken.file.posix#file-open)
    (file-owner . chicken.file.posix#file-owner)
    (file-permissions . chicken.file.posix#file-permissions)
    (file-position . chicken.file.posix#file-position)
    (file-read . chicken.file.posix#file-read)
    (file-select . chicken.file.posix#file-select)
    (file-size . chicken.file.posix#file-size)
    (file-stat . chicken.file.posix#file-stat)
    (file-test-lock . chicken.file.posix#file-test-lock)
    (file-truncate . chicken.file.posix#file-truncate)
    (file-unlock . chicken.file.posix#file-unlock)
    (file-write . chicken.file.posix#file-write)
    (file-type . chicken.file.posix#file-type)
    (block-device? . chicken.file.posix#block-device?)
    (character-device? . chicken.file.posix#character-device?)
    (directory? . chicken.file.posix#directory?)
    (fifo? . chicken.file.posix#fifo?)
    (regular-file? . chicken.file.posix#regular-file?)
    (socket? . chicken.file.posix#socket?)
    (symbolic-link? . chicken.file.posix#symbolic-link?)
    (fileno/stderr . chicken.file.posix#fileno/stderr)
    (fileno/stdin . chicken.file.posix#fileno/stdin)
    (fileno/stdout . chicken.file.posix#fileno/stdout)
    (open-input-file* . chicken.file.posix#open-input-file*)
    (open-output-file* . chicken.file.posix#open-output-file*)
    (open/append . chicken.file.posix#open/append)
    (open/binary . chicken.file.posix#open/binary)
    (open/creat . chicken.file.posix#open/creat)
    (open/excl . chicken.file.posix#open/excl)
    (open/fsync . chicken.file.posix#open/fsync)
    (open/noctty . chicken.file.posix#open/noctty)
    (open/noinherit . chicken.file.posix#open/noinherit)
    (open/nonblock . chicken.file.posix#open/nonblock)
    (open/rdonly . chicken.file.posix#open/rdonly)
    (open/rdwr . chicken.file.posix#open/rdwr)
    (open/read . chicken.file.posix#open/read)
    (open/sync . chicken.file.posix#open/sync)
    (open/text . chicken.file.posix#open/text)
    (open/trunc . chicken.file.posix#open/trunc)
    (open/write . chicken.file.posix#open/write)
    (open/wronly . chicken.file.posix#open/wronly)
    (perm/irgrp . chicken.file.posix#perm/irgrp)
    (perm/iroth . chicken.file.posix#perm/iroth)
    (perm/irusr . chicken.file.posix#perm/irusr)
    (perm/irwxg . chicken.file.posix#perm/irwxg)
    (perm/irwxo . chicken.file.posix#perm/irwxo)
    (perm/irwxu . chicken.file.posix#perm/irwxu)
    (perm/isgid . chicken.file.posix#perm/isgid)
    (perm/isuid . chicken.file.posix#perm/isuid)
    (perm/isvtx . chicken.file.posix#perm/isvtx)
    (perm/iwgrp . chicken.file.posix#perm/iwgrp)
    (perm/iwoth . chicken.file.posix#perm/iwoth)
    (perm/iwusr . chicken.file.posix#perm/iwusr)
    (perm/ixgrp . chicken.file.posix#perm/ixgrp)
    (perm/ixoth . chicken.file.posix#perm/ixoth)
    (perm/ixusr . chicken.file.posix#perm/ixusr)
    (port->fileno . chicken.file.posix#port->fileno)
    (set-file-group! . chicken.file.posix#set-file-group!)
    (set-file-owner! . chicken.file.posix#set-file-owner!)
    (set-file-permissions! . chicken.file.posix#set-file-permissions!)
    (set-file-position! . chicken.file.posix#set-file-position!)
    (set-file-times! . chicken.file.posix#set-file-times!)
    (seek/cur . chicken.file.posix#seek/cur)
    (seek/set . chicken.file.posix#seek/set)
    (seek/end . chicken.file.posix#seek/end))
  (scheme#list)
  (scheme#list))

;; END OF FILE
