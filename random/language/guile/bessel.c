#include <math.h>
#include <libguile.h>

/* 
   must take and return SCM data type to be scheme worthy
*/
SCM j0_wrapper (SCM x)
{
       return scm_from_double (j0 (scm_to_double (x)));
}

/*
   rename, useful because scheme has less limited syntax rules
   scm_c_define_gsubr ("what to call it", 
                        # required args , 
                        # optional args , 
                        # reserve args? , 
                        actual function name);
   reported limit of 10 args, which is kind of stupid.
*/
void init_bessel ()
{
       scm_c_define_gsubr ("j0", 1, 0, 0, j0_wrapper);
}
