#include <stdio.h>			/* for printf */
#include <gmp.h>

int main(int argc, char *argv[])
{
  mpf_t a, b, c;
  mpf_t determinant;
  mpf_t doubleSoultion1, doubleSoultion2, realSolution, imaginarySolution;
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
  gmp_printf ("c: fixed point mpf %.*Ff with %d digits\n", n, c, n);



  // User is alerted if any of a,b,c are invalid

  // Quadsolver uses quadratic equation to calculate roots
  mpf_t d1,d2, number;
  mpf_init(d1);
  mpf_init(d2);
  mpf_init(determinant);

  mpf_set_d(number, -4);
  
  //determinant=b*b-4*a*c;
  mpf_mul (d1, b, b);
  mpf_mul (d2, a, c);
  mpf_mul (d2, number, d2);
  mpf_add (determinant, d1, d2);
  
  mpf_t sq,num1,num2,denom;
  mpf_init(sq);
  mpf_init(num1);
  mpf_init(num2);
  mpf_init(denom);

  mpf_set_d(number, 2);
  mpf_mul (denom, number, a);

  mpf_set_d(number, 0);
  int type = mpf_cmp(determinant,number);
  mpf_set_d(number, 2);

  if (type>0)
  {
      // doubleSoultion1= (-b+sqrt(determinant))/(2*a);
      // doubleSoultion2= (-b-sqrt(determinant))/(2*a);

      mpf_sqrt (sq, determinant);
      mpf_neg (b, b);
      
      mpf_add (num1, b, sq);
      mpf_sub (num2, b, sq);
      
      mpf_div (doubleSoultion1, num1, denom);
      mpf_div (doubleSoultion2, num2, denom);
      // mpf_cdiv_q(doubleSoultion1, num1, denom);
      // mpf_cdiv_q(doubleSoultion2, num2, denom);

  }
  else if (type==0)
  {
    //doubleSoultion1 = doubleSoultion2 = -b/(2*a);
    mpf_mul (denom, number, a);
    mpf_neg (b, b);
    mpf_div (doubleSoultion1, b, denom);  
    mpf_div (doubleSoultion2, b, denom);  
  }
  else
  {
    //realSolution= -b/(2*a);
    //imaginarySolution = sqrt(-determinant)/(2*a);
    mpf_neg (b, b);
    mpf_mul (denom, number, a);
    mpf_div (realSolution, b, denom);  

    mpf_neg (determinant, determinant);
    mpf_sqrt (sq, determinant);
    mpf_div (imaginarySolution, sq, denom);  
      
  }

  // User is prompted if there is any problem calculating roots

  // User is prompted wether there is one solution, no solution or a double solution

  // User is prompted with the numberical answer(s) given their a,b,c



  return 0;
}