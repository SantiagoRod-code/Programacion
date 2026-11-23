#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]){
    float tiempo;
    float aceleracion = 32;
    float distancia;
    
    printf("Ingrese el tiempo de la caida en segundos: ");
    scanf("%f", &tiempo);

    distancia = (aceleracion * (tiempo*tiempo)) / 2;

    printf("La distancia recorrida es: %.2f pies\n", distancia);

    return 0;
}