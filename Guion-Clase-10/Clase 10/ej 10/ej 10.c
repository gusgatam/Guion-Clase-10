#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i=1,div;
	float rt,ac,nd;
	printf("Ingrese un numero a dividir ");
	scanf("%f",&nd);
	printf("Ingrese el divisor ");
	scanf("%d",&div);
	while (div<nd){
	nd=nd-div;
	i=i+1;
	}

	printf("El resultado es %d",i);
	return 0;
}
