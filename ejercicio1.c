#include <stdio.h>
#include <stdlib.h>
#define N 5

void carga (float ventas[N]){
    float importe;
    int nc,i;
    for (i=0;i<N;i++){
        printf("ingrese el numero de cajero e importe recaudado\n");
        scanf("%d",&nc);
        scanf("%f",&importe);
        ventas[nc-1]=importe;
    }
}

void mostrar(float ventas[N]){
    int i ;
    for(i=0;i<N;i++){
        printf("estos son los cajeros %d y las ventas registradas %f");
    }
}


int main (){
   printf("<<<Bienvenidos>>>");
   float ventas[N];
   carga(ventas);
   mostrar(ventas);
    
}