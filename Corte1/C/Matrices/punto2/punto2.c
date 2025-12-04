#include <stdio.h>

int main() {
	int cont=0,fil,col,f,c,sum=0,dat;
	float med=0;

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
		dat=0;
		//suma y media pares
		for(f=0; f<fil; f++) {
			for(c=0; c<col; c++) {
				if(v1[f][c]%2==0) {
					sum=sum+v1[f][c];
					dat++;
				}
			}
		}
		med=(float)sum/dat;
		printf("\nLa suma de los numeros pares de la matriz es:%d",sum);
		printf("\nLa media de datos pares de la matriz es %f",med);
		//Suma y media impares
		sum=0;
		med=0;
		dat=0;
		for(f=0; f<fil; f++) {
			for(c=0; c<col; c++) {
				if(v1[f][c]%2!=0) {
					sum=sum+v1[f][c];
					dat++;
				}
			}
		}
		med=(float)sum/dat;
		printf("\nLa suma de los numeros impares de la matriz es:%d",sum);
		printf("\nLa media de datos impares de la matriz es %f",med);
		//suma y media posicion par
		sum=0;
		med=0;
		dat=0;
		for(f=0; f<fil; f++) {
			for(c=0; c<col; c++) {
				if(c%2==0) {
					sum=sum+v1[f][c];
					dat++;
				}
			}
		}
		med=(float)sum/dat;
		printf("\nLa suma de los numeros en posiciones pares de la matriz es:%d",sum);
		printf("\nLa media de datos en posiciones pares de la matriz es %f",med);
		//suma y media posicion impar
		sum=0;
		med=0;
		dat=0;
		for(f=0; f<fil; f++) {
			for(c=0; c<col; c++) {
				if(c%2!=0) {
					sum=sum+v1[f][c];
					dat++;
				}
			}
		}
		med=(float)sum/dat;
		printf("\nLa suma de los numeros en posiciones impares de la matriz es:%d",sum);
		printf("\nLa media de datos en posiciones impares de la matriz es %f",med);

		printf("\nDesea continuar? 0=Si 1=No:  ");
		scanf("%d",&cont);

	} while(cont==0);


	return 0;
}