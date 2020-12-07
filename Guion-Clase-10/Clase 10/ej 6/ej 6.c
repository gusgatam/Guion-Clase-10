#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,fc=1,n=0;
	printf("Ingrese un numero ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		fc=fc*i;
	}
	printf("El factorial es %d ",fc);
	return 0;
}
