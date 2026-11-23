#include <stdio.h>

int main(int argc, char *argv[]) {
    int a, b, c, d, e;
    int aux;
        
    printf("Ingrese el primer valor entero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo valor entero: ");
    scanf("%d", &b);
    printf("Ingrese el tercer valor entero: ");
    scanf("%d", &c);
    printf("Ingrese el cuarto valor entero: ");
    scanf("%d", &d);
    printf("Ingrese el quinto valor entero: ");
    scanf("%d", &e);

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    if (a > c) {
        aux = a;
        a = c;
        c = aux;
    }

    if (a > d) {
        aux = a;
        a = d;
        d = aux;
    }

    if (a > e) {
        aux = a;
        a = e;
        e = aux;
    }

    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }

    if (b > d) {
        aux = b;
        b = d;
        d = aux;
    }

    if (b > e) {
        aux = b;
        b = e;
        e = aux;
    }

    if (c > d) {
        aux = c;
        c = d;
        d = aux;
    }

    if (c > e) {
        aux = c;
        c = e;
        e = aux;
    }

    if (d > e) {
        aux = d;
        d = e;
        e = aux;
    }

    printf("Numeros en orden ascendente:\n");
    printf("%d %d %d %d %d\n", a, b, c, d, e);

    return 0;
}