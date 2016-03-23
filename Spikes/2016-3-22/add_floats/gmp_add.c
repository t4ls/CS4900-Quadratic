#include <stdio.h>			/* for printf */
#include <gmp.h>

int main(int argc, char *argv[])
{
  mpf_t a, b, c;
  float aa, bb;

  if (argc==1){

    // User is prompted to insert values for a,b,c
    printf("%s\n", "Please enter values for a, b, and c: ");

    // User is able to enter values for a,b,c
    scanf("%f",&aa);
    scanf("%f",&bb);

    printf("a: %f, b: %f\n", aa,bb);

    printf("\n");

    mpf_init(a);
    mpf_init(b);

    mpf_set_d(a, aa);
    mpf_set_d(b, bb);


  }else{
    if(argc<3){

      printf("%s\n", "Error: Not enough arguments provided");
      printf("%s\n", "Please enter values for a and b");

      return 1;
    }


    mpf_init_set_str (a, argv[1], 10);
    mpf_init_set_str (b, argv[2], 10);

  }
  int   n = 25;

  mpf_add (c, a, b);

  gmp_printf ("a: fixed point mpf %.*Ff with %d digits\n", n, a, n);
  gmp_printf ("b: fixed point mpf %.*Ff with %d digits\n", n, b, n);
  gmp_printf ("c: fixed point mpf %.*Ff with %d digits\n", n, c, n);

  return 0;
}