//algortimo seleccion simple
#include <stdio.h>
#include <stdlib.h>

int suma (int xa,int xb){
    return(xa+xb);
}


main (){
    int a,b,result;
    printf("Ingrese el valor de a\n");   
    scanf("%d",&a);
    printf("Ingrese el valor de b\n");
    scanf("%d",&b);
    result = suma(a,b);
    if(result>20){
        printf("El resultado es mayor a 20\n");
    }
    else{
        printf("El resultado es menor a 20\n");
    }
}