/* Ejemplo 3: Construyamos un algoritmo que usando 
subprogramas informe el aumento y el sueldo a cobrar
por un empleado, teniendo en cuenta que:
1) se ingresa previamente por teclado su sueldo básico y la categoría
2) El aumento depende de la categoría del empleado, a saber:
 las categorías A,B y C tendrán un aumento del 15%
 las categorías D y E tendrán un aumento del 10% */


#include <stdio.h>
#include <stdlib.h>

float aumento (float imp, float porc){
    return (imp*porc/100);
}

float sueldoDefinitivo(float xsueldo,char xcategoria ){
    float def;
    def = xsueldo;

    switch(xcategoria){
        case 1: 'A'; 
           def=def+aumento(xsueldo,15);
        break;





    };

}

void mostrar (float xsueldo,char xcategoria ){

}

int main (){
    float sueldo;
    char categoria;

    printf("Ingrse el sueldo de la persona\n");
    scanf("%f",& sueldo);
    printf("Ingrese la catergoria de la persona");
    scanf("%c",& categoria);
    sueldo = sueldoDefinitivo (sueldo,categoria);
    mostrar(sueldo,categoria);
}