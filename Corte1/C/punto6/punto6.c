#include<stdio.h>

int main(){
	int a, b, c, max, min;
	char nuevo;
	do{
	printf("Digite 3 numeros\n");
	scanf(" %d %d %d", &a, &b, &c);
	
	max=a;
	min=a;
	
		if (b>max){
			max=b;
		}
		else{
		max=max;
		}

	
		if (c>max){
			max=c;
		}
		else{
			max=max;
		}	
				
		if (b<min){
			min=b;
		}
		else{
			min=min;
		}
			
		if (c<min){
			min=c;
		}
		else{
			min=min;
		}

		
	printf("Su valor maximo es: %d\n Su valor minimo: %d\n", max, min);	
	
	printf("\nQuieres revisar otros numeros: s/n\n");
	scanf(" %c", &nuevo);
		
	}while(nuevo=='s'||nuevo=='s');
}