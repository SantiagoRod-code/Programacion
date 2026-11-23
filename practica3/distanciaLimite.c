#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
    float tiempo;
    float aceleracion = 9.7536;
    float distancia;
    float pies;
    float millas;
    float kilometros;

    const float alturaMax = 160000.0;

    printf("Ingrese el tiempo de la caida en segundos: ");
    scanf("%f", &tiempo);

    distancia = (aceleracion * (tiempo * tiempo)) / 2;

    if (distancia > alturaMax) {
        printf("\nError: la distancia calculada supera la altura maxima establecida.\n");
        printf("La altura maxima es de %.2f metros.\n", alturaMax);
    } else {
        pies = distancia * 3.28084;
        millas = distancia * 0.000621371;
        kilometros = distancia / 1000;

        printf("\nDistancia recorrida:\n");
        printf("%.2f metros\n", distancia);
        printf("%.2f pies\n", pies);
        printf("%.2f millas\n", millas);
        printf("%.2f kilometros\n", kilometros);
    }

    return 0;
}