#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i, t, sum=0;
	float med;
	
	printf("Digite la longitud del vector: ");
	scanf("%d",&t);
	
	int v1[t];
	
	for(i=0;i<t;i++){
		printf("\nDigite valor %d del vector: ",i);
		scanf("%d",&v1[i]);
	}
	
	printf("\nSu vector es: ");
	for(i=0;i<t;i++){
		printf("%d",v1[i]);
	}
	
	printf("\nLa suma de los elementos del vector es: ");
	for(i=0;i<t;i++){
		sum= sum+v1[i];
	}
	printf("%d",sum);
	
	med= sum/t;
	printf("\nEl promedio de los datos del vector es: %.2f",med);
	return 0;
}



//Programa que lea un vector y genere la sumatoria de los elementos del vector y su promedio
