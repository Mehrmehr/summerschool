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

#ifndef ADD_H
#define ADD_H


void u_function(temperature *ptr);

void laplacian(temperature *ptr);

#endif
