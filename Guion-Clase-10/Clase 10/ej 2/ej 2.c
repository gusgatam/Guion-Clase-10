#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int mes,dia,year,a;

	printf("Ingrese un anio ");
	scanf("%d",&year);
	while (y>0){
		printf("\n Ingrese un mes ");
		scanf("%d",&mes);
		while((mes<=12)&&(mes>=1)){
				printf("\n Ingrese un dia ");
				scanf("%d",&dia);
				if (mes==2){
				while((28>=dia)&&(dia>=1)){
					printf("\n Fecha valida ");
					scanf(" ",&a);
				}
						} else{

				while((31>=dia)&&(dia>=1)){
					printf("\n Fecha valida ");
					scanf(" ",&a);
				}
			}
					printf("\n Dia no valido");
				}
		printf("\n Mes no valido");
	}
	return 0;
}
