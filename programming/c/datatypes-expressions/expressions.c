#include <stdio.h>

int main(int argc, char *argv[])
{
    // declare integers, floats, and doubles

	double a,b,c;
	a = 1.0;
	b = 3.5;

	double *p;

    // evaluate expressions, e.g. c = a + 2.5 * b

	c = a + 2.5 * b ;
    // and print out results. Try to combine integers, floats
  
	p = &c;

    // and doubles and investigate what happens in type conversions

	
	printf(" The value stored in p is: %d, and in *p is %d", p, *p);

    return 0;
}
