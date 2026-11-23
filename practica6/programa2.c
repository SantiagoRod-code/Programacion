#include <stdio.h>

void sumar(int a, int b, int *ptr);
void dividir(int a, int b, float *ptr);
int * multiplicar(int a, int b);
int * restar(int a, int b);
void mostrarResultados(int suma, float division,
int *producto, 
int *diferencia);

void sumar(int a, int b, int *ptr) {
    *ptr = a + b;
}

void dividir(int a  , int b, float *ptr) {
    *ptr = (float)a / b;
}

int * multiplicar(int a, int b) {
    static int resultado;
    resultado = a * b;
    return &resultado;
}

int * restar(int a, int b) {
    static int resultado;
    resultado = a - b;
    return &resultado;
}

void mostrarResultados(int suma, float division, int *producto, int *diferencia) {
        int arreglo[] = {
            23, 5, 98, 65, 3, 55, 73, 9, 21, 85, 100, 
            -7, 45, 99, 18, 66, 99, 101
        };
    printf("Valor de a: %d\n", *(arreglo + 0));
    printf("Valor de b: %d\n", *(arreglo + 1));
    printf("Suma: %d\n", suma);
    printf("Division: %.2f\n", division);
    printf("Multiplicacion: %d\n", *producto);
    printf("Resta: %d\n", *diferencia);
}

int main(void) {

    int arreglo[] = {
        23, 5, 98, 65, 3, 55, 73, 9, 21, 85, 100, 
        -7, 45, 99, 18, 66, 99, 101
    };

    int a = *(arreglo + 0);
    int b = *(arreglo + 1);

    int resultadoSuma;
    float resultadoDivision;

    sumar(a, b, &resultadoSuma);
    dividir(a, b, &resultadoDivision);

    int *resultadoMultiplicacion = multiplicar(a, b);
    int *resultadoResta = restar(a, b);

    mostrarResultados(resultadoSuma, resultadoDivision,
    resultadoMultiplicacion, resultadoResta);

    return 0;
}
