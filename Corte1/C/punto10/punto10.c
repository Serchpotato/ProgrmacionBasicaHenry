#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int generado, intento, intentos = 0;

    srand(time(NULL));

    generado= rand() % 10 + 1;

    printf("Adivina un numero entre 1 y 10\n");

    do {
        printf("Ingresa tu intento: ");
        scanf("%d", &intento);
        intentos++;

        if (intento < 1 || intento > 10) {
            printf("Numero fuera de rango. Debe estar entre 1 y 10.\n");
        } else if (intento < generado) {
            printf("Demasiado bajo. Intenta otra vez.\n");
        } else if (intento > generado) {
            printf("Demasiado alto. Intenta otra vez.\n");
        } else {
            printf("¡Correcto! Adivinaste el número en %d intento(s).\n", intentos);
        }

    } while (intento != generado);

    return 0;
}
