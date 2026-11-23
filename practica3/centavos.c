#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]){
    int centavos50, centavos25, centavos10, centavos5, centavos1;
    int resultado;
    
    printf("Ingrese el numero de centavos de 50: ");
    scanf("%i", &centavos50);
    printf("Ingrese el numero de centavos de 25: ");
    scanf("%i", &centavos25);
    printf("Ingrese el numero de centavos de 10: ");
    scanf("%i", &centavos10);
    printf("Ingrese el numero de centavos de 5:  ");
    scanf("%i", &centavos5);
    printf("Ingrese el numero de centavos de 1:  ");
    scanf("%i", &centavos1);

    resultado = (centavos50 * 50) + (centavos25 * 25) + (centavos10 * 10) + (centavos5 * 5) + (centavos1 * 1);

    printf("El resultado es: %i centavos\n", resultado);

    return 0;
}