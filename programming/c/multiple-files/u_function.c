#include "add.h"

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
