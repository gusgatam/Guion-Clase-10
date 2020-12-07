#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int fct,ctd,pouo,nmp,pmv,mi,vt;
	printf("\n Ingrese el numero de factura ");
	scanf("%d",&fct);
	 while (fct!=999){
		printf("\n Ingrese la cantidad ");
		scanf("%d",&ctd);
		printf("\n Ingrese el precio unitario ");
		scanf("%d",&pouo);
		printf("\n Ingrese el numero de producto ");
		scanf("%d",&nmp);
				vt=ctd*pouo;
					if (vt>mv){
						mi=vt;
					}
				if (ctd>pmv) {
					pmv=nmp;
				}
	printf("\n //////////////////////////////////////////////////////////");
	printf("\n Ingrese la factura ");
	scanf("%d",&fct);
	}
	printf("\n El mayor importe fue %d ",mi);
	printf("\n El producto mas vendido fue %d ",pmv);
	return 0;
}
