#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i,t,sum=0,cont=0;
	printf("Digite la longitud de los vectores: "),
	scanf("%d",&t);

	int v1[t],v2[t];
	do{	
		for(i=0;i<t;i++){
			printf("\nDigite el valor %d del vector 1: ",i);
			scanf("%d",&v1[i]);
		}
		
		for(i=0;i<t;i++){
			printf("\nDigite el valor %d del vector 2: ",i);
			scanf("%d",&v2[i]);
		}
		
		printf("\nEl vector 1 es: ");
		for(i=0;i<t;i++){
			printf("|%d|",v1[i]);
		}
		
		printf("\nEl vector 2 es: ");
		for(i=0;i<t;i++){
			printf("|%d|",v2[i]);
		}
		
		printf("La suma de cada posicion de los vectores es");
		for(i=0;i<t;i++){
			sum=v1[i]+v2[i];
			printf("|%d|",sum);
		}
		printf("\nDesea continuar?(0=Si, 1=No): ");
		scanf("%d",&cont);
	}while (cont==0);
	return 0;
}



//Realizar un programa que me permita recorrer y llenar dos
//  vectores y que en un tercer vector muestre la suma de cada una de las posiciones del vector.

