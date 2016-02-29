#include <stdio.h>			/* for printf */
#include <gmp.h>

int main(int argc, char *argv[])
{
  mpf_t a, b, c;
  float aa, bb, cc;

  if (argc=1)

    // User is prompted to insert values for a,b,c
    printf("%s", "Please enter values for a, b, and c: ");

    // User is able to enter values for a,b,c
    sscanf(argv[1], "%f", &a);
    sscanf(argv[2], "%f", &b);
    sscanf(argv[3], "%f", &c);

    mpf_init(a);
    mpf_init(b);
    mpf_init(c);

    mpf_set_d(a, aa);
    mpf_set_d(b, bb);
    mpf_set_d(c, cc);


  int   n;
  gmp_printf ("fixed point mpf %.*Ff with %d digits\n", n, f, n);

  }else{

    mpz_init_set_str (a, argv[1], 10);
    mpz_init_set_str (b, argv[2], 10);
    mpz_init_set_str (c, argv[3], 10);

  }





  //3.) User is alerted if any of a,b,c are invalid

  //4.) Quadsolver uses quadratic equation to calculate roots

  //5.) User is prompted if there is any problem calculating roots

  //6.) User is prompted wether there is one solution, no solution or a double solution

  //7.) User is prompted with the numberical answer(s) given their a,b,c
  return 0;
}