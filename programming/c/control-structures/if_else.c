#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    // write the control structure as described in the exercise
    // and run the code with different values for i

	i = 104;
	
	if (i < 0) 
	printf("negative");	
	
	else if (i == 0)
        printf("zero");


	else if (i > 100)
        printf("greater than 100");

	else
        printf("non of the cases!");



    return 0;
}
