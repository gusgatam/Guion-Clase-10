#include <stdio.h>
#include<stdio.h>
#include<conio.h>

void main()
{
	int I=0,n=0,mm=0;
	printf("Ingrese un numero del 1 al 10 ");
	scanf("%d",&n);
	if (n>10){
		printf("Numero superior a 10");
	} else if (n<= 0){
		printf("Numero negativo o cero");
	} else{

		for (I=1;I<=12;I++){
			mm=n*I;
			printf("\n %d x %d = %d",n,I,mm);
		}
	}
}
