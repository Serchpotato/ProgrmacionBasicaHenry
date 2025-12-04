#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int cont=0,fil,col,f,c;
	
	do{
		printf("Digite las filas y columnas de su matriz (n,m)\n");
		scanf("%d,%d",&fil,&col);
		int v1[fil][col];
		
		for(f=0;f<fil;f++){
			for(c=0;c<col;c++){
				printf("\nDigite el valor %d %d de su matriz",f,c);
				scanf("%d",&v1[f][c]);
			}
		}
		printf("\nSu matriz es: \n");
		for(f=0;f<fil;f++){
			for(c=0;c<col;c++){
				printf("|%d|",v1[f][c]);
			}printf("\n");
		}
		printf("\nDesea continuar? 0=Si 1=No:  ");
		scanf("%d",&cont);
	}while (cont==0);
	return 0;
}


//Dada una matriz de tamaño NxM de tipo entero, se pide escribir un programa en C que lea
// la matriz y posteriormente muestre por pantalla el número de valores pares que existen en la matriz.
