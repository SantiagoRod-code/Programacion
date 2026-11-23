#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;

    return (x > y) - (x < y);
}

int main() {
    int numeros[1000];
    int n = 0;
    int num;

    printf("Ingrese numeros enteros (negativo para terminar):\n");

    while (1) {
        printf("Numero: ");

        if (scanf("%d", &num) != 1) {
            printf("Error: debe ingresar un numero entero.\n");
            return 1;
        }

        if (num < 0) {
            break;
        }

        numeros[n] = num;
        n++;

        if (n == 1000) {
            printf("Se alcanzo el limite de 1000 numeros.\n");
            break;
        }
    }

    if (n == 0) {
        printf("No se ingresaron numeros validos.\n");
        return 0;
    }

    qsort(numeros, n, sizeof(int), comparar);

    printf("\nCantidad de numeros: %d\n", n);
    printf("Numero mas bajo: %d\n", numeros[0]);
    printf("Numero mas alto: %d\n", numeros[n - 1]);

    if (n % 2 == 1) {
        printf("Numero medio: %d\n", numeros[n / 2]);
    } else {
        printf("Numeros medios: %d y %d\n",
            numeros[n / 2 - 1], numeros[n / 2]);
    }

    return 0;
}