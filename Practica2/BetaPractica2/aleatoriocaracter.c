#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    char caracter1, caracter2;
    int limite = 95;
    
    srand(time(NULL));
    
    caracter1 = 32 + rand() % limite;
    caracter2 = 32 + rand() % limite;
    
    printf("caracter Uno = %c\n", caracter1);
    printf("ASCII caracter Uno = %d\n", caracter1);
    
    printf("caracter Dos = %c\n", caracter2);
    printf("ASCII caracter Dos = %d\n", caracter2);
    
    return 0;
}