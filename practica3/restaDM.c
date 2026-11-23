#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]){
    int numeroUno, numeroDos;
    float resta, division;
    int modulo;
    
    printf("Ingrese el primer numero entero \n");
    scanf("%d", &numeroUno);
    
    printf("Ingrese el segundo numero entero \n");
    scanf("%d", &numeroDos);

    resta = numeroUno - numeroDos;
    division = (float)numeroUno / numeroDos;
    modulo = numeroUno % numeroDos;

    printf("\nla resta de %d - %d = %f \n", numeroUno, numeroDos, resta);
    printf("la division de %d / %d = %f \n", numeroUno, numeroDos, division);
    printf("el modulo de %d mod %d = %d\n", numeroUno, numeroDos, modulo);
    
    printf("Este es el final del programa.");
    
    return 0;
}