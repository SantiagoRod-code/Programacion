#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]){
    int numeroUno, numeroDos;
    int producto, suma;
    
    printf("Ingrese el primer numero entero \n");
    scanf("%i", &numeroUno);
    printf("Ingrese el segundo numero entero \n");
    scanf("%i", &numeroDos);

    suma=numeroUno+numeroDos;
    producto=numeroUno*numeroDos;

    printf("\nla suma de %i + %i = %i \n", numeroUno, numeroDos, suma);
    printf("la multiplicacion de %i * %i = %i \n", numeroUno, numeroDos, producto);
    printf("Este es el final del programa.");
    return 0;
}