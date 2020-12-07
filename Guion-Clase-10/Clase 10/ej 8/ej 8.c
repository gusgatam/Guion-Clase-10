#include <iostream>

int main(int argc, char** argv) {
	int i,n,n1,ac;
	printf("Ingrese un numero ");
	scanf("%d",&n);
	printf("Ingrese otro numero ");
	scanf("%d",&n1);
	for (i=n;i<=n1;i++){
		ac=i*5;
		printf("\n %d",ac);
	}
	return 0;
}
