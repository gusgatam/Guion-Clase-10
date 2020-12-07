#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main(void) {
	int i,dni,birdei,ch=0,cm=0,dtr=0;
	float me=0,ct1=0,ed,pme;
	char sx;
	printf("\n Ingrese su dni ");
	scanf("%d",&dni);
		for(i=dni;i>0;i++){
			ct1=ct1+1;
			printf("\n Ingrese su sexo F/M ");
			scanf("%s",&sx);
			printf("\n Ingrese su anio de nacimiento ");
			scanf("%d",&birdei);
			ed=2020-birdei;

			if(sx=='f'){
				cm=cm+1;
			}
			if(sx=='m'){
				ch=ch+1;
			}

			if(dni<=30000000){
				dmt=dmt+1;
			}
			if(ed<=17){
			me=me+1;
			}


		printf("\n Ingrese su dni ");
		scanf("%d",&dni);
		i=dni;
		}
	pme=(me*100)/ct1;
	printf("\n La cantidad de hombres %d ",ch);
	printf("\n La cantidad de mujeres %d ",cm);
	printf("\n El porcentaje de menores de edad es %f ",pme);
	printf("\n Personas con dni menor a 30 millones %d ",dmt);

	return 0;
}
