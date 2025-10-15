#include<stdio.h>

int main (){
	int anio;
	char nuevo;
	do{
	printf("Digite el año\n");
	scanf(" %d", &anio);
	
	if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
	{ 
		printf(" %d es un año bisiesto\n", anio);
	}
	else {
		printf (" %d el año no es bisiesto\n", anio);
	}
		printf(" Quieres revisar otra año: s/n\n");
		scanf(" %c", &nuevo);
	}while(nuevo == 's'||nuevo == 's');
}

