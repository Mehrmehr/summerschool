#include "add.h"

void laplacian(temperature *ptr){

        int i,j;


        for (i=1;i<ptr->Nx-1;i++){
                for(j=1;j<ptr->Ny-1;j++){
                       ptr->laplacian[i][j]= (ptr->u[i-1][j]-2.0*ptr->u[i][j]+ptr->u[i+1][j])/ptr->lx2 + (ptr->u[i][j-1]-2.0*ptr->u[i][j]+ptr->u[i][j+1]) / ptr->ly2;

                }

        }

}

