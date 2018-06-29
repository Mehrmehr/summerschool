#include <stdio.h>

int main(int argc, char *argv[])
{
    // declare array and loop variable
    int f[20];
    int i;

    // initialize necessary array elements and write the for loop
	
	f[0] = 0;
	f[1] = 1;


    printf("First 20 Fibonacci numbers are:\n");

    printf("\t %d \n ", f[0]);
    printf("\t %d \n ", f[1]);

    for (i = 0; i < 20; i++) {
	f[i+2] = f[i+1] + f[i];
        printf("\t %d \n ", f[i+2]);
    }

    printf("\n");

    return 0;
}
