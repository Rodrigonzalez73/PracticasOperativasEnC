#include <stdio.h>
#include <stdlib.h>
#define N 5

void carga (int arre[N]){
    int i ;
    for(i=0;i<N;i++){
        printf ("Ingrese numero\n");
        scanf("%d",&arre[i]);
    }
}

int buscar(int arre[N], int elem){
    int i ;
    i=0;
    while((i<N)&&(arre[i]!=elem)){
        i=i+1;
    }
    return i;
}

int main (){
    int arre[N],p,elem;
    carga(arre);
    p=buscar(arre,elem);
        if (p<N){
            printf("El elemnto se encuentra en la posicion ",p);
        }
        else printf("El elemento no se encontro en el arreglo");
}