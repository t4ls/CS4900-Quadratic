#include <stdio.h>
#include <math.h>


main( int argc, char *argv[] )
{

	float aa, bb, cc;

	sscanf(argv[1], "%f", &aa);
	sscanf(argv[2], "%f", &bb);
	sscanf(argv[3], "%f", &cc);

	printf("ax^2 = %f\nbx   = %f\n c   = %f",aa,bb,cc);

}