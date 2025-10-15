#include <stdio.h>

int main() {
	int num, i, primo=1;
	printf("Ingrese un numero: ");
	scanf("%d", &num);

	if (num <=1) {
		printf("%d no es un numero primo\n", num);
	} else {
		for(i=2; i<= num/2; i++) {
			if(num % i == 0) {
				primo = 0;
				break;
			}
		}

		if (primo==1) {
			printf("Su numero es primo\n");
		} else {
			printf("Su numero no es primo\n");
		}
	}

	return 0;
}
