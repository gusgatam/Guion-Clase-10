#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>

int main(int argc, char *argv[]) {
	int i,x,nt;
	char nm[20],mvp[100],ma[100];
	for (i=1;i<16;i++){
		printf("\n Ingrese la nota de el alumno %d ",i);
		scanf("%d",&nt);
		printf("\n Ingrese el nombre de el alumno %d ",i);
		scanf("%s",&nm);
		if (nt>=8){
			strcpy(mvp,nm);
			strcat(ma,mvp);
			strcat(ma," ");
		}
	}
	printf("\n Los mejores alumnos son ");
	printf("%s ",ma);
	return 0;
}
