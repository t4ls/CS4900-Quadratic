#include <stdio.h>			/* for printf */
#include <gmp.h>

int main(int argc, char *argv[])
{
  mpf_t a, b, c;
  float aa, bb, cc;

  if (argc==1){

    // User is prompted to insert values for a,b,c
    printf("%s\n", "Please enter values for a, b, and c: ");

    // User is able to enter values for a,b,c
    scanf("%f",&aa);
    scanf("%f",&bb);
    scanf("%f",&cc);

    printf("a: %f, b: %f, c: %f\n", aa,bb,cc);

    printf("\n");

    mpf_init(a);
    mpf_init(b);
    mpf_init(c);

    mpf_set_d(a, aa);
    mpf_set_d(b, bb);
    mpf_set_d(c, cc);


  }else{
    if(argc<4){

      printf("%s\n", "Error: Not enough arguments provided");
      printf("%s\n", "Please enter values for a,b,c");

      return 1;
    }


    mpf_init_set_str (a, argv[1], 10);
    mpf_init_set_str (b, argv[2], 10);
    mpf_init_set_str (c, argv[3], 10);

  }
    int   n = 5;
    gmp_printf ("a: fixed point mpf %.*Ff with %d digits\n", n, a, n);
    gmp_printf ("b: fixed point mpf %.*Ff with %d digits\n", n, b, n);
    gmp_printf ("fixed point mpf %.*Ff with %d digits\n", n, c, n);





  // User is alerted if any of a,b,c are invalid

  // Quadsolver uses quadratic equation to calculate roots

  // User is prompted if there is any problem calculating roots

  // User is prompted wether there is one solution, no solution or a double solution

  // User is prompted with the numberical answer(s) given their a,b,c
  return 0;
}