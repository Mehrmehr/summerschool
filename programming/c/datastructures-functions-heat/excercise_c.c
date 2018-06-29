#include <stdio.h>
#include <stdlib.h>

#define nx 258
#define ny 258

typedef struct {

	int Nx;
	int Ny;
	double lx;
	double ly;
	double lx2;
	double ly2;
	double u[nx][ny];
	double laplacian[nx][ny];

}temperature;

void u_function(temperature *ptr){
	int i,j;

        for (i=0;i<ptr->Nx;i++){
                for(j=0;j<ptr->Ny;j++){
                        ptr->u[i][j]= 0.0;

                }

        }

        for (i=0;i<ptr->Nx;i++){

                 ptr->u[i][0] = 20.0;
                 ptr->u[i][ptr->Ny-1] = 70.0;

        }

        for (i=0;i<ptr->Ny;i++){

                 ptr->u[0][i] = 85.0;
                 ptr->u[ptr->Nx-1][i] = 5.0;

        }


}


void laplacian(temperature *ptr){

	int i,j;

	
        for (i=1;i<ptr->Nx-1;i++){
                for(j=1;j<ptr->Ny-1;j++){
                       ptr->laplacian[i][j]= (ptr->u[i-1][j]-2.0*ptr->u[i][j]+ptr->u[i+1][j])/ptr->lx2 + (ptr->u[i][j-1]-2.0*ptr->u[i][j]+ptr->u[i][j+1]) / ptr->ly2;

                }

        }

}

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

	save_png((double *) temp.u, temp.Nx, temp.Ny, "datastructures_functions_heat.png", 'c');

   

    return 0;
}


