#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMITE 100

int main(int argc, char *argv[]) {

    srand(time(NULL));

    // Tipo de datos: long para cx y cy
    long cx = 1 + rand() % LIMITE;
    long cy = 1 + rand() % LIMITE;

    // Variables de casteo o mutacion
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;

    // Tipo de dato long

    printf("Long cx: %ld\n", cx);
    printf("Long cy: %ld\n\n", cy);

    // Operadores Aritmeticos

    printf("%ld * %ld = ", cx, cy);
    cx = cx * cy;
    printf("%ld\n\n", cx);

    printf("%ld / %ld = ", cx, cy);
    cx = cx / cy;
    printf("%ld\n\n", cx);

    printf("%ld mod %ld = ", cx, cy);
    cx = cx % cy;
    printf("%ld\n\n", cx);

    printf("%ld + %ld = ", cx, cy);
    cx = cx + cy;
    printf("%ld\n\n", cx);

    printf("%ld - %ld = ", cx, cy);
    cx = cx - cy;
    printf("%ld\n\n", cx);

    cx++;
    printf("cx++ = %ld\n", cx);

    cx--;
    printf("cx-- = %ld\n", cx);

    ++cx;
    printf("++cx = %ld\n", cx);

    --cx;
    printf("--cx = %ld\n", cx);

    cx = +cy;
    printf("cx = +cy = %ld\n", cx);

    cx = -cy;
    printf("cx = -cy = %ld\n\n", cx);

    // Operadores relacionales

    if (cx > cy) {
        printf("%ld es mayor que %ld\n", cx, cy);
    }

    if (cx >= cy) {
        printf("%ld es mayor o igual que %ld\n", cx, cy);
    }

    if (cx < cy) {
        printf("%ld es menor que %ld\n", cx, cy);
    }

    if (cx <= cy) {
        printf("%ld es menor o igual que %ld\n", cx, cy);
    }

    if (cx == cy) {
        printf("%ld es igual a %ld\n", cx, cy);
    }

    if (cx != cy) {
        printf("%ld es diferente a %ld\n", cx, cy);
    }

    // Operadores de Bits

    cx = ~cy;
    printf("cx = ~cy = %ld\n", cx);

    printf("%ld & %ld = ", cx, cy);
    cx = cx & cy;
    printf("%ld\n", cx);

    printf("%ld | %ld = ", cx, cy);
    cx = cx | cy;
    printf("%ld\n", cx);

    printf("%ld ^ %ld = ", cx, cy);
    cx = cx ^ cy;
    printf("%ld\n", cx);

    printf("%ld << 1 = ", cx);
    cx = cx << 1;
    printf("%ld\n", cx);

    printf("%ld >> 1 = ", cx);
    cx = cx >> 1;
    printf("%ld\n\n", cx);

    // Asignacion compuesta

    printf("%ld += %ld = ", cx, cy);
    cx += cy;
    printf("%ld\n", cx);

    printf("%ld -= %ld = ", cx, cy);
    cx -= cy;
    printf("%ld\n", cx);

    printf("%ld *= %ld = ", cx, cy);
    cx *= cy;
    printf("%ld\n", cx);

    printf("%ld /= %ld = ", cx, cy);
    cx /= cy;
    printf("%ld\n", cx);

    printf("%ld mod= %ld = ", cx, cy);
    cx %= cy;
    printf("%ld\n", cx);

    printf("%ld <<= 1 = ", cx);
    cx <<= 1;
    printf("%ld\n", cx);

    printf("%ld >>= 1 = ", cx);
    cx >>= 1;
    printf("%ld\n", cx);

    printf("%ld &= %ld = ", cx, cy);
    cx &= cy;
    printf("%ld\n", cx);

    printf("%ld ^= %ld = ", cx, cy);
    cx ^= cy;
    printf("%ld\n", cx);

    printf("%ld |= %ld = ", cx, cy);
    cx |= cy;
    printf("%ld\n\n", cx);

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