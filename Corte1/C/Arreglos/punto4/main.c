#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int cont=0,fil,col,f,c,m,max;
	
	do{
		printf("Digite las filas y columnas de su matriz (N,N)\n");
		scanf("%d,%d",&fil,&col);
		
		int v1[fil][col];
		for(f=0;f<fil;f++){
			for(c=0;c<col;c++){
				printf("\nDigite el valor %d %d de su matriz",f,c);
				scanf("%d",&v1[f][c]);
			}
		}
		
		printf("\nSu matriz es:\n");
		for(f=0;f<fil;f++){
			for(c=0;c<col;c++){
			printf("|%d|",v1[f][c]);
			
			}printf("\n");
		}
		
		int v2[fil];
		
		for(f=0;f<fil;f++){
			max=v1[f][0];
			for(c=0;c<col;c++){
				if(v1[f][c]>max){
					max=v1[f][c];
				}
			v2[f]=max;
			}
		}
		printf("\nEl vector de los maximos de cada fila es: \n");
		for(m=0;m<fil;m++){
					printf("|%d|",v2[m]);
				}
		
		printf("\nDesea continuar? (0=Si 1=No): ");
		scanf("%d",&cont);
	}while (cont==0);
	return 0;
}


//Escribir un programa que lea una matriz de enteros de dimensión NxN. Posteriormente, 
 //calcular el valor máximo de cada fila y almacenarlo en un vector. Por ejemplo:

