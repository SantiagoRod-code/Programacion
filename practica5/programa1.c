#include <stdio.h>

#define MAX 100

int leerNumeros(int numeros[]);
void ordenar(int numeros[], int cantidad);

int main(int argv, char *arg[]) {
    int numeros[MAX];
    int cantidad, suma = 0;
    int mayor, menor;
    float promedio, mediana;

    cantidad = leerNumeros(numeros);

    if (cantidad == 0) {
        printf("\nNo se ingresaron numeros.\n");
        return 0;
    }

    mayor = menor = numeros[0];

    for (int i = 0; i < cantidad; i++) {
        suma += numeros[i];

        if (numeros[i] > mayor)
            mayor = numeros[i];

        if (numeros[i] < menor)
            menor = numeros[i];
    }

    ordenar(numeros, cantidad);

    if (cantidad % 2 == 1)
        mediana = numeros[cantidad / 2];
    else
        mediana = ((float)numeros[cantidad / 2 - 1] +
                   numeros[cantidad / 2]) / 2.0f;

    promedio = (float)suma / cantidad;

    printf("\n RESULTADOS \n");
    printf("Valor mas alto: %d\n", mayor);
    printf("Valor mas bajo: %d\n", menor);
    printf("Valor intermedio (mediana): %.2f\n", mediana);
    printf("Suma de los valores: %d\n", suma);
    printf("Total de numeros ingresados: %d\n", cantidad);
    printf("Promedio: %.2f\n", promedio);

    return 0;
}

// Lectura de numeros hasta ingresar uno negativo
int leerNumeros(int numeros[]) {
    int cantidad = 0, valor;

    printf("Ingresa numeros enteros (un negativo termina).\n");

    while (cantidad < MAX) {
        printf("Numero %d: ", cantidad + 1);
        
        if (scanf("%d", &valor) != 1) {
            printf("Entrada no valida.\n");
            return 0;
        }

        if (valor < 0)
            break;

        numeros[cantidad] = valor;
        cantidad++;
    }

    return cantidad;
}

// Ordenamiento burbuja
void ordenar(int numeros[], int cantidad) {
    int aux;

    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = 0; j < cantidad - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }
}
