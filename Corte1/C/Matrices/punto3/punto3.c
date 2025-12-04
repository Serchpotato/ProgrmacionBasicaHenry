#include <stdio.h>

int main() {
    
    int cont=0,fil,col,f,c,max=0,min,sum=0;
    
    do{
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
		for(f=0; f<fil; f++) {
			for(c=0; c<col; c++) {
			    if(v1[f][c]>max){
			        max=v1[f][c];
			    }
			}
		}
		printf("\nEl valor maximo de la matriz es %d",max);
		min=max;
		for(f=0; f<fil; f++) {
			for(c=0; c<col; c++) {
			    if(v1[f][c]<min){
			        min=v1[f][c];
			    }
			}
		}
		printf("\nEl valor minimo de la matriz es %d",min);
		for(f=0; f<fil; f++) {
			for(c=0; c<col; c++) {
			    sum=sum+v1[f][c];
			}
		}
		printf("\nLa suma de los datos de la matriz es: %d",sum);
		printf("\nDesea continuar? 0=Si 1=No:  ");
		scanf("%d",&cont);
	    
    }while (cont==0);
    
    
    
    
    return 0;
}

//Escribir un programa que lea una matriz entera de tamaño NxM y 
//obtenga el valor máximo y mímico de toda la matriz. Obtener 
//también la media de todos los elementos de la matriz.

