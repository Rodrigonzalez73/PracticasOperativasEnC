#include  <stdio.h>
#define N 5

struct tortas{
	int tipo,cant;
	float precio;
};

void inicializar(struct tortas xt[N]){
	int i;
	for(i=0;i<=N-1;i++){
		printf("\nIngrese tipo: ");
		scanf("%d",&xt[i].tipo);
		printf("\nIngrese precio: ");
		scanf("%f",&xt[i].precio);
		xt[i].cant=0;
	}
}

void carga (struct tortas xt[N]){
	int tp, M, i;
	printf("\nIngrese M: ");
	scanf("%d",&M);
	for(i=0;i<M;i++){
		printf("\nIngrese tipo: ");
		scanf("%d", &tp);
		xt[tp-1].cant=xt[tp-1].cant+1;
	}
}

void informar (struct tortas  xt[N]){
	int i;
	float tot;
	for(i=0;i<=N-1;i++){
		tot=(xt[i].cant*xt[i].precio);
		printf("\nEl total vendido para el tipo de torta %d", xt[i].tipo); printf(" es: %g", tot);
	}
}

void indicar (struct tortas  xt[N]){
	int i, xmax, max, xmin;
	float min;
	max=xt[0].cant;
	for(i=0;i<=N-1;i++){
		if(xt[i].cant>max){
			max=xt[i].cant;
			xmax=xt[i].tipo;
		}
	}
	min=xt[0].precio;
	for(i=0;i<=N-1;i++){
		if(xt[i].precio<min){
			min=xt[i].precio;
			xmin=xt[i].tipo;
		}
	}
	if(xmax==xmin){
		printf("\nEl tipo de torta %d", xmax); printf(" es la mas vendida y la de menor precio");
	}
}

int main(){
	struct tortas  t[N];
	inicializar(t);
	carga(t);
	informar(t);
	indicar(t);
}
