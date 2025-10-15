#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n1, n2,i, contador=1;
int main(int argc, char *argv[]) {
	
	printf("Digite primer numero del intervalo\n");
	scanf("%d",&n1);
	printf("Digite segundo numero del intervalo\n");
	scanf("%d",&n2);
	
	if (n1<=n2){
		printf("El primer numero debe ser mayor que el segundo\n");
		return 0;
	}
	
	for (i=n2+1; i<n1; i++){
		if(i%2==0){
			printf("\nnumero par %d: %d\n",contador, i);
			contador++;
		}
		if (contador==4){
			break;
		}
	}
	if (contador <3){
		printf("No hay tres numeros pares entre los valores ingresados\n");
	}
	return 0;
}
