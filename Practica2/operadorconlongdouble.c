#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMITE 100

int main(int argc, char *argv[]) {

    srand(time(NULL));

    // Tipo de datos: long double para cx y cy
    long double cx = 1.0L + (long double)(rand() % LIMITE);
    long double cy = 1.0L + (long double)(rand() % LIMITE);

    // Variables de casteo o mutacion
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;

    // Tipo de dato long double

    printf("Long double cx: %Lf\n", cx);
    printf("Long double cy: %Lf\n\n", cy);

    // Operadores Aritmeticos

    printf("%Lf * %Lf = ", cx, cy);
    cx = cx * cy;
    printf("%Lf\n\n", cx);

    printf("%Lf / %Lf = ", cx, cy);
    cx = cx / cy;
    printf("%Lf\n\n", cx);

    printf("%Lf + %Lf = ", cx, cy);
    cx = cx + cy;
    printf("%Lf\n\n", cx);

    printf("%Lf - %Lf = ", cx, cy);
    cx = cx - cy;
    printf("%Lf\n\n", cx);

    cx++;
    printf("cx++ = %Lf\n", cx);

    cx--;
    printf("cx-- = %Lf\n", cx);

    ++cx;
    printf("++cx = %Lf\n", cx);

    --cx;
    printf("--cx = %Lf\n", cx);

    cx = +cy;
    printf("cx = +cy = %Lf\n", cx);

    cx = -cy;
    printf("cx = -cy = %Lf\n\n", cx);

    // Operadores relacionales

    if (cx > cy) {
        printf("%Lf es mayor que %Lf\n", cx, cy);
    }

    if (cx >= cy) {
        printf("%Lf es mayor o igual que %Lf\n", cx, cy);
    }

    if (cx < cy) {
        printf("%Lf es menor que %Lf\n", cx, cy);
    }

    if (cx <= cy) {
        printf("%Lf es menor o igual que %Lf\n", cx, cy);
    }

    if (cx == cy) {
        printf("%Lf es igual a %Lf\n", cx, cy);
    }

    if (cx != cy) {
        printf("%Lf es diferente a %Lf\n", cx, cy);
    }

    // Asignacion compuesta

    printf("%Lf += %Lf = ", cx, cy);
    cx += cy;
    printf("%Lf\n", cx);

    printf("%Lf -= %Lf = ", cx, cy);
    cx -= cy;
    printf("%Lf\n", cx);

    printf("%Lf *= %Lf = ", cx, cy);
    cx *= cy;
    printf("%Lf\n", cx);

    printf("%Lf /= %Lf = ", cx, cy);
    cx /= cy;
    printf("%Lf\n\n", cx);

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