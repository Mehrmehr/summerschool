#include <stdio.h>
#include <stdlib.h>
#include "add.h"

int main(void)
{
    int i, j;
    // Add here the definition for array with name 'array'
    // of size NX times NY (258x258)
    // #error Define the array

        temperature temp;
        temp.Nx = 258;
        temp.Ny = 258;
        temp.lx = 0.01;
        temp.ly = 0.01;
        temp.lx2 = temp.lx * temp.lx;
        temp.ly2 = temp.ly * temp.ly;

        u_function(&temp);

        laplacian(&temp);

        save_png((double *) temp.u, temp.Nx, temp.Ny, "multifiles_example.png", 'c');

	return 0;

}
