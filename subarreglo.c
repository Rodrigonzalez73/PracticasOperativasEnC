//algortimo seleccion simple
#include <stdio.h>
#include <stdlib.h>
#define N 50
void carga (int edad[N]){
    int i ;
    for (i=0;i<N;i++){
        printf("ingrese edad");
        scanf("%d",&edad[i]);
    }
}

int carga_subarreglo(int edad[N],int selec[N]){
    int i,j;
    j=0;
    for(i=0;i<N;i++){
        if(edad[i]>25){
            selec[j]=edad[i];
            j=j+1;
        }
    }
    return j;
}
  
  int mostarSubArreglo(int selec[N],int c){
    int i ;
    for (i=0;i<c;i++){
        printf("%d ", selec[i]);
    }
  }

int main (){
    int edad[N],selec[N],c;
    carga (edad);
    c=carga_subarreglo(edad,selec);
    mostarSubArreglo(selec,c);
}