#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i=1,div;
	float nd;
	printf("Ingrese un numero a dividir ");
	scanf("%f",&nd);
	printf("Ingrese el divisor ");
	scanf("%d",&div);
	while (div<nd){
	nd=nd-div;
	}
		if (nd==div){
			nd=nd-div;
		}
	printf("El resto es %f",nd);
	return 0;
}
