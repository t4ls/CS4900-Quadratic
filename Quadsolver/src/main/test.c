#include <stdlib.h>
#include <stdio.h>
#include <gmp.h>

int main (int argc, char *argv[]) {
    mpf_t sq_me, sq_out, test;
    mpf_set_default_prec (10000);
    mpf_init(sq_me);
    mpf_init(sq_out);
    mpf_init(test);
    mpf_set_str (sq_me, argv[1], 10);

    mpf_sqrt(sq_out, sq_me);
    mpf_mul(test,sq_out,sq_out);

    gmp_printf ("Input:       %Ff\n\n", sq_me);
    gmp_printf ("Square root: %.200Ff\n\n", sq_out);
    gmp_printf ("Re-squared:  %Ff\n\n", test);

    return 0;
}