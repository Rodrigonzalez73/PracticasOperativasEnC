#include <stdio.h>
#include <stdlib.h>
#define N 4
/*ambiente*/

struct categorias{
    int codigo;
    float sueldo;
    int cant;
};

/*subprograma inicializar*/
void inicilizar ( struct categorias xcat[N] ){
    int i ;
    for (i=0;i<N;i++){
        scanf("%d",&xcat[i].codigo);
        scanf("%f",&xcat[i].sueldo);
        xcat[i].cant = 0;
        }
}
/*subprograma carga*/
void carga (struct categorias xcat[N]){
    int cate, M,i;
    scanf("%d",&M);
    for (i=0;i<M;i++){
        scanf("%d",&cate);
        xcat[cate-1].cant=xcat[cate-1].cant+1;
    }
    return;
}

/*subprograma infornmar*/

void informar (struct categoria xcat[N]){
    int i;
    float sub;
    for (i=0;i<N;i++){
        printf("La cantidad a pagar en nsueldos para la categoria"),i+1,"es",sub= xcat[i].cant * xcat[i].sueldo;
    }
}

/*subprograma indicar*/
void indicar(struct categoria xcat[N]){

    int i,xmax,max,xmin;
    float min;

    max=xcat[0].cant;

}

/*algoritmo principal*/
 main()
{struct categorias categ[N];

inicializar(categ);
carga(categ);
informar(categ);
indicar(categ);
}