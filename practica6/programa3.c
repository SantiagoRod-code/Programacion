#include <stdio.h>

#define MAX 30

void buscar(int arreglo[], int *desordenados[], int cantidad);
void mostrarResultados(int arreglo[], int *desordenados[]);

void buscar(int arreglo[], int *desordenados[], int cantidad) {
    int j = 0;

    for (int i = 1; i < cantidad; i++) {

        if (*(arreglo + i) < *(arreglo + i - 1)) {
            *(desordenados + j) = arreglo + i;
            j++;
        }
    }

    *(desordenados + j) = NULL;
}

void mostrarResultados(int arreglo[], int *desordenados[]) {
    int i = 0;

    if (*desordenados == NULL) {
        printf("\nEl arreglo esta ordenado en forma creciente.\n");
        return;
    }

    while (*(desordenados + i) != NULL) {

        int posicion = *(desordenados + i) - arreglo;

        printf("El %d esta desordenado y es el elemento numero %d del arreglo.\n",
               **(desordenados + i), posicion + 1);

        i++;
    }
}

int main(void) {
    int arreglo[MAX];
    int *desordenados[MAX + 1];
    int cantidad = 0;
    int numero;

    printf("Ingresa enteros (ingresa    0 para terminar):\n");

    while (cantidad < MAX) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        *(arreglo + cantidad) = numero;
        cantidad++;
    }

    buscar(arreglo, desordenados, cantidad);

    mostrarResultados(arreglo, desordenados);

    return 0;
}
