#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMITE 100

int main(int argc, char *argv[]) {

    srand(time(NULL));

    // Tipo de datos: float para cx y cy
    float cx = 1.0f + (float)(rand() % LIMITE);
    float cy = 1.0f + (float)(rand() % LIMITE);

    // Variables de casteo o mutacion
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;

    // Tipo de dato float

    printf("Float cx: %f\n", cx);
    printf("Float cy: %f\n\n", cy);

    // Operadores Aritmeticos

    printf("%f * %f = ", cx, cy);
    cx = cx * cy;
    printf("%f\n\n", cx);

    printf("%f / %f = ", cx, cy);
    cx = cx / cy;
    printf("%f\n\n", cx);

    printf("%f + %f = ", cx, cy);
    cx = cx + cy;
    printf("%f\n\n", cx);

    printf("%f - %f = ", cx, cy);
    cx = cx - cy;
    printf("%f\n\n", cx);

    cx++;
    printf("cx++ = %f\n", cx);

    cx--;
    printf("cx-- = %f\n", cx);

    ++cx;
    printf("++cx = %f\n", cx);

    --cx;
    printf("--cx = %f\n", cx);

    cx = +cy;
    printf("cx = +cy = %f\n", cx);

    cx = -cy;
    printf("cx = -cy = %f\n\n", cx);

    // Operadores relacionales

    if (cx > cy) {
        printf("%f es mayor que %f\n", cx, cy);
    }

    if (cx >= cy) {
        printf("%f es mayor o igual que %f\n", cx, cy);
    }

    if (cx < cy) {
        printf("%f es menor que %f\n", cx, cy);
    }

    if (cx <= cy) {
        printf("%f es menor o igual que %f\n", cx, cy);
    }

    if (cx == cy) {
        printf("%f es igual a %f\n", cx, cy);
    }

    if (cx != cy) {
        printf("%f es diferente a %f\n", cx, cy);
    }

    // Asignacion compuesta

    printf("%f += %f = ", cx, cy);
    cx += cy;
    printf("%f\n", cx);

    printf("%f -= %f = ", cx, cy);
    cx -= cy;
    printf("%f\n", cx);

    printf("%f *= %f = ", cx, cy);
    cx *= cy;
    printf("%f\n", cx);

    printf("%f /= %f = ", cx, cy);
    cx /= cy;
    printf("%f\n\n", cx);

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