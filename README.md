# CS4900-Quadratic

##Specifications
Operating System:    Linux

Programing Language: C 

User Interface:      Command Line

Precision:           As precise as possible, more than single digit pecision. Wants IEEE floating point

Input Values:        All Real numbers 

Output Values:       One solution, double soultion, or no solution


##Todo
Get example data

##How to Install GMP

sudo apt-get install m4

download gmp from https://gmplib.org/

cd gmp-6.1.0

./configure

make

make check

make install

#How to run example
gcc -o add_example add_example.c -lgmp -lm