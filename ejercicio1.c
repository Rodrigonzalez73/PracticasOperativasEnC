#include <stdio.h>
#include <stdlib.h>

int main (){
    int a, b,suma;
    printf("Ingrese le valor de a\n");
    scanf("%d",&a);
    printf("Ingrese le valor de b\n");
    scanf("%d",&b);
    suma = a + b;
    printf("La suma de ",a,"+",b,"es",suma);
}