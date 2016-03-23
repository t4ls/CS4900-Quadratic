#include <stdio.h>			/* for printf */
#include <gmp.h>

int main(int argc, char *argv[])
{
  mpf_t a;
  float aa;

  if (argc==1){

    // User is prompted to insert values for a,b,c
    printf("%s\n", "Please enter values for a: ");

    // User is able to enter values for a,b,c
    scanf("%f",&aa);

    printf("a: %f\n", aa);

    printf("\n");

    mpf_init(a);

    mpf_set_d(a, aa);


  }else{
    if(argc<2){

      printf("%s\n", "Error: Not enough arguments provided");
      printf("%s\n", "Please enter values for a a");

      return 1;
    }


    mpf_init_set_str (a, argv[1], 10);

  }
  int   n = 25;

  mpf_neg (a);

  gmp_printf ("a: fixed point mpf %.*Ff with %d digits\n", n, a, n);

  return 0;
}