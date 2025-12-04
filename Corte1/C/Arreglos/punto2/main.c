#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i,n;
	printf("Digite la longitud de su vector: ");
	scanf("%d",&n);
	
	int v1[n];
	
	for(i=0;i<n;i++){
		printf("\nDigite el elemento %d del vector: ",i);
		scanf("%d",&v1[i]);
		if(v1[i]%2!=0){
			printf("\nEl numero ingresado no es par");
			i--;
		printf("%d",v1[i]);
		}
		
		
	}
	printf("\nSu vector es: ");
	for(i=0;i<n;i++){
		printf("%d",v1[i]);
	}
	return 0;
}


//Realizar un programa que me permita desarrollar un vector de N posiciones
//y que solo deje introducir número pares e indique su posición en el vector.
