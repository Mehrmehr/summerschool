#include <stdio.h>
#include <stdlib.h>

#define Nx 258
#define Ny 258
#define lx 0.01
#define ly 0.01

int main(void)
{
    int i, j;
    // Add here the definition for array with name 'array'
    // of size NX times NY (258x258)
    // #error Define the array

	double array[Nx][Ny];
	double laplacian[Nx][Ny];

	for (i=0;i<Nx;i++){
		for(j=0;i<Ny;j++){
			array[i][j]= 0.0;
			
		}

	}

        for (i=0;i<Nx;i++){
               
   	         array[i][0] = 20.0;
                 array[i][Ny-1] = 70.0;                       

        }

        for (i=0;i<Ny;i++){

                 array[0][j] = 85.0;
                 array[Nx-1][j] = 5.0;

        }



        for (i=1;i<Nx-1;i++){
                for(j=1;i<Ny-1;j++){
                        laplacian[i][j]= (array[i-1][j]-2.0*array[i][j]+array[i+1][j])/(lx*lx) + (array[i][j-1]-2.0*array[i][j]+array[i][j+1]) / (ly*ly);

                }

        }

	

    // Initialize first the zeros
	//#error Initialize the zeros for interior

    // Initial conditions for left and right
	//#error add boundary conditions for left and right

    // and top and bottom boundaries
	//#error add boundary conditions for top and bottom

    return 0;
}
