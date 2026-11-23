#include<Stdio.h>

void mostrarOperaciones(int arreglo[]) {
    int *p;
    p = arreglo;
    printf (" %d\n", arreglo[*(p + 7)]);
    printf (" %d\n", *arreglo + 3);
    printf (" %d\n", *p++);
    printf(" %d\n", *(arreglo + 1));
    printf(" %d\n", (*p)++);
    printf(" %d\n", *p);
    printf(" %d\n", *p++);
    printf(" %d\n", *p);
}
int main(int argv, char *arg[]) {
    int arreglo[] = {
        23, 5, 98, 65, 3, 55, 73, 9, 21, 85, 100, 
        -7, 45, 99, 18, 66, 99, 101
    };
    mostrarOperaciones(arreglo);
    return 0;
}