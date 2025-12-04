#include <stdio.h>

int main()
{
	int fil,col,f,c,cont,sum=0;

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
			sum=0;
			for(c=0; c<col; c++) {
				printf("|%d|",v1[f][c]);
				sum=sum+v1[f][c];
			}
			printf(" =%d",sum);
		}
		printf("\n");
		for(c=0; c<col; c++) {
			sum=0;
			for(f=0; f<fil; f++) {
				sum=sum+v1[f][c];
			}
			printf(" %d  ",sum);
		}
		printf("\nDesea continuar? 0=Si 1=No:  ");
		scanf("%d",&cont);
	} while(cont==0);

	return 0;
}
//Escribir un programa que lea una matriz de nC:meros reales,
//calcule la suma de cada fila y de cada  columna y muestre por pantalla la nueva tabla, incluyendo las sumas.

//	Por ejemplo:

//	5	6	1	=  12
//	2	6	3	= 11
//	6	2	0	=  8

//	13	14	4




