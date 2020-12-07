#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,tpa=0,si=0,ci;
	float pg,pgc,pc,acu,n=1,cont=1,nt=0,nottp,mvp;
	for (i=1;i<51;i++){
		printf("\n\n Ingrese la nota del trabajo practico ");
		scanf("%f",&nottp);
		printf("\n Ingrese una nota ");
		scanf("%f",&n);
			while(ln>=0){
			cont=cont+1;
			acu=ln+acu;
			printf("\n Ingrese otra nota ");
			scanf("%f",&n);
			}

			if (nottp>=6){
				tpa=tpa+1;
			}
	nt=nottp+acu;
	pg=nt/cont;
	pgc=pgc+pg;
			if (pg>mvp){
				mvp=pg;
				ci=i;
			}

			if (cont<=2){
			si=si+1;
			}

	printf("\n El promedio del alumno %d es  %f ",i,pg);
	printf("\n ///////////////////////////////////////////////////////////////////////////////");
	cont=1;
	acu=0;
	}
	pc=pgc/50;
	printf("\n Los alumnos que aprobaron el tp es %d ",tpa);
	printf("\n El promedio general del curso es %f ",pc);
	printf("\n El mejor promedio fue el alumno %d con un promedio de %f ",ci,mvp);
	printf("\n Los alumnos con 2 o menos notas ingresadas : %d",si);
	return 0;
}
