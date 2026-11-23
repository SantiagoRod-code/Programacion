#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMITE 100

int main(int argc, char *argv[]) {

    srand(time(NULL));

    // Tipo de datos: double para cx y cy
    double cx = 1.0 + (double)(rand() % LIMITE);
    double cy = 1.0 + (double)(rand() % LIMITE);

    // Variables de casteo o mutacion
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;

    // Tipo de dato double

    printf("Double cx: %lf\n", cx);
    printf("Double cy: %lf\n\n", cy);

    // Operadores Aritmeticos

    printf("%lf * %lf = ", cx, cy);
    cx = cx * cy;
    printf("%lf\n\n", cx);

    printf("%lf / %lf = ", cx, cy);
    cx = cx / cy;
    printf("%lf\n\n", cx);

    printf("%lf + %lf = ", cx, cy);
    cx = cx + cy;
    printf("%lf\n\n", cx);

    printf("%lf - %lf = ", cx, cy);
    cx = cx - cy;
    printf("%lf\n\n", cx);

    cx++;
    printf("cx++ = %lf\n", cx);

    cx--;
    printf("cx-- = %lf\n", cx);

    ++cx;
    printf("++cx = %lf\n", cx);

    --cx;
    printf("--cx = %lf\n", cx);

    cx = +cy;
    printf("cx = +cy = %lf\n", cx);

    cx = -cy;
    printf("cx = -cy = %lf\n\n", cx);

    // Operadores relacionales

    if (cx > cy) {
        printf("%lf es mayor que %lf\n", cx, cy);
    }

    if (cx >= cy) {
        printf("%lf es mayor o igual que %lf\n", cx, cy);
    }

    if (cx < cy) {
        printf("%lf es menor que %lf\n", cx, cy);
    }

    if (cx <= cy) {
        printf("%lf es menor o igual que %lf\n", cx, cy);
    }

    if (cx == cy) {
        printf("%lf es igual a %lf\n", cx, cy);
    }

    if (cx != cy) {
        printf("%lf es diferente a %lf\n", cx, cy);
    }

    // Asignacion compuesta

    printf("%lf += %lf = ", cx, cy);
    cx += cy;
    printf("%lf\n", cx);

    printf("%lf -= %lf = ", cx, cy);
    cx -= cy;
    printf("%lf\n", cx);

    printf("%lf *= %lf = ", cx, cy);
    cx *= cy;
    printf("%lf\n", cx);

    printf("%lf /= %lf = ", cx, cy);
    cx /= cy;
    printf("%lf\n\n", cx);

    // Casting o mutacion

    s = (short)cx;
    printf("short: %d\n", s);

    i = (int)cx;
    printf("int: %d\n", i);

    l = (long)cx;
    printf("long: %ld\n", l);

    f = (float)cx;
    printf("float: %f\n", f);

    d = (double)cx;
    printf("double: %lf\n", d);

    ld = (long double)cx;
    printf("long double: %Lf\n", ld);

    return 0;
}