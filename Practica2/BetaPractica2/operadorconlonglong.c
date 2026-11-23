#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMITE 100

int main(int argc, char *argv[]) {

    srand(time(NULL));

    // Tipo de datos: long long para cx y cy
    long long cx = 1 + rand() % LIMITE;
    long long cy = 1 + rand() % LIMITE;

    // Variables de casteo o mutacion
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;

    // Tipo de dato long long

    printf("Long long cx: %lld\n", cx);
    printf("Long long cy: %lld\n\n", cy);

    // Operadores Aritmeticos

    printf("%lld * %lld = ", cx, cy);
    cx = cx * cy;
    printf("%lld\n\n", cx);

    printf("%lld / %lld = ", cx, cy);
    cx = cx / cy;
    printf("%lld\n\n", cx);

    printf("%lld mod %lld = ", cx, cy);
    cx = cx % cy;
    printf("%lld\n\n", cx);

    printf("%lld + %lld = ", cx, cy);
    cx = cx + cy;
    printf("%lld\n\n", cx);

    printf("%lld - %lld = ", cx, cy);
    cx = cx - cy;
    printf("%lld\n\n", cx);

    cx++;
    printf("cx++ = %lld\n", cx);

    cx--;
    printf("cx-- = %lld\n", cx);

    ++cx;
    printf("++cx = %lld\n", cx);

    --cx;
    printf("--cx = %lld\n", cx);

    cx = +cy;
    printf("cx = +cy = %lld\n", cx);

    cx = -cy;
    printf("cx = -cy = %lld\n\n", cx);

    // Operadores relacionales

    if (cx > cy) {
        printf("%lld es mayor que %lld\n", cx, cy);
    }

    if (cx >= cy) {
        printf("%lld es mayor o igual que %lld\n", cx, cy);
    }

    if (cx < cy) {
        printf("%lld es menor que %lld\n", cx, cy);
    }

    if (cx <= cy) {
        printf("%lld es menor o igual que %lld\n", cx, cy);
    }

    if (cx == cy) {
        printf("%lld es igual a %lld\n", cx, cy);
    }

    if (cx != cy) {
        printf("%lld es diferente a %lld\n", cx, cy);
    }

    // Operadores de Bits

    cx = ~cy;
    printf("cx = ~cy = %lld\n", cx);

    printf("%lld & %lld = ", cx, cy);
    cx = cx & cy;
    printf("%lld\n", cx);

    printf("%lld | %lld = ", cx, cy);
    cx = cx | cy;
    printf("%lld\n", cx);

    printf("%lld ^ %lld = ", cx, cy);
    cx = cx ^ cy;
    printf("%lld\n", cx);

    printf("%lld << 1 = ", cx);
    cx = cx << 1;
    printf("%lld\n", cx);

    printf("%lld >> 1 = ", cx);
    cx = cx >> 1;
    printf("%lld\n\n", cx);

    // Asignacion compuesta

    printf("%lld += %lld = ", cx, cy);
    cx += cy;
    printf("%lld\n", cx);

    printf("%lld -= %lld = ", cx, cy);
    cx -= cy;
    printf("%lld\n", cx);

    printf("%lld *= %lld = ", cx, cy);
    cx *= cy;
    printf("%lld\n", cx);

    printf("%lld /= %lld = ", cx, cy);
    cx /= cy;
    printf("%lld\n", cx);

    printf("%lld mod= %lld = ", cx, cy);
    cx %= cy;
    printf("%lld\n", cx);

    printf("%lld <<= 1 = ", cx);
    cx <<= 1;
    printf("%lld\n", cx);

    printf("%lld >>= 1 = ", cx);
    cx >>= 1;
    printf("%lld\n", cx);

    printf("%lld &= %lld = ", cx, cy);
    cx &= cy;
    printf("%lld\n", cx);

    printf("%lld ^= %lld = ", cx, cy);
    cx ^= cy;
    printf("%lld\n", cx);

    printf("%lld |= %lld = ", cx, cy);
    cx |= cy;
    printf("%lld\n\n", cx);

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