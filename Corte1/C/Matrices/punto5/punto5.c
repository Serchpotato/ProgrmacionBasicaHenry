#include <stdio.h>

int main()
{
	int fil,col,f,c,cont,max;

	do {
		printf("\nDigite las filas y columnas de su matriz (n,m): ");
		scanf("%d,%d",&fil,&col);
		int v1[fil][col];
		for(f=0; f<fil; f++) {
			for(c=0; c<col; c++) {
				printf("\nDigite el valor %d %d de la matriz: ",f,c);
				scanf("%d",&v1[f][c]);
			}
		}
		printf("\nSu matriz es: \n");
		for(f=0; f<fil; f++) {
			printf("\n");
			for(c=0; c<col; c++) {
				printf("|%d|",v1[f][c]);
			}
		}
		int v2[fil];
		max=v1[0][0];
		for(f=0; f<fil; f++) {
			for(c=0; c<col; c++) {
				if(v1[f][c]>max) {
					max=v1[f][c];
					v2[f]=max;
				}
			}
		}
		printf("\nEl vector de los maximos de cada fila es:\n");
		for(f=0; f<fil; f++) {
			printf("|%d|",v2[f]);
		}
		printf("Desea continuar? 0=Si 1=No:  ");
		scanf("%d",&cont);
	} while(cont==0);

	return 0;
}

// Escribir un programa que lea una matriz de enteros de dimensiC3n NxN.
//	Posteriormente,  calcular el valor mC!ximo de cada fila y almacenarlo en un vector. Por ejemplo:

//	3 5 1
//	6 7 2		 5 7 9
//	8 1 9


