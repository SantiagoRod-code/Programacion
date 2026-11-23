#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMITE 100

int main(int argc, char *argv[]) {

    srand(time(NULL));

    // Tipo de datos: int para cx y cy
    int cx = 1 + rand() % LIMITE;
    int cy = 1 + rand() % LIMITE;

    // Variables de casteo o mutacion
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;

    // Tipo de dato int

    printf("Entero cx: %d\n", cx);
    printf("Entero cy: %d\n\n", cy);

    // Operadores Aritmeticos

    printf("%d * %d = ", cx, cy);
    cx = cx * cy;
    printf("%d\n\n", cx);

    printf("%d / %d = ", cx, cy);
    cx = cx / cy;
    printf("%d\n\n", cx);

    printf("%d mod %d = ", cx, cy);
    cx = cx % cy;
    printf("%d\n\n", cx);

    printf("%d + %d = ", cx, cy);
    cx = cx + cy;
    printf("%d\n\n", cx);

    printf("%d - %d = ", cx, cy);
    cx = cx - cy;
    printf("%d\n\n", cx);

    // Operadores Simples

    cx++;
    printf("cx++ = %d\n", cx);

    cx--;
    printf("cx-- = %d\n", cx);

    ++cx;
    printf("++cx = %d\n", cx);

    --cx;
    printf("--cx = %d\n", cx);

    cx = +cy;
    printf("cx = +cy = %d\n", cx);

    cx = -cy;
    printf("cx = -cy = %d\n\n", cx);

    // Operadores relacionales

    if (cx > cy) {
        printf("%d es mayor que %d\n", cx, cy);
    }

    if (cx >= cy) {
        printf("%d es mayor o igual que %d\n", cx, cy);
    }

    if (cx < cy) {
        printf("%d es menor que %d\n", cx, cy);
    }

    if (cx <= cy) {
        printf("%d es menor o igual que %d\n", cx, cy);
    }

    if (cx == cy) {
        printf("%d es igual a %d\n", cx, cy);
    }

    if (cx != cy) {
        printf("%d es diferente a %d\n", cx, cy);
    }

    // Operadores de Bits

    cx = ~cy;
    printf("cx = ~cy = %d\n", cx);

    printf("%d & %d = ", cx, cy);
    cx = cx & cy;
    printf("%d\n", cx);

    printf("%d | %d = ", cx, cy);
    cx = cx | cy;
    printf("%d\n", cx);

    printf("%d ^ %d = ", cx, cy);
    cx = cx ^ cy;
    printf("%d\n", cx);

    printf("%d << 1 = ", cx);
    cx = cx << 1;
    printf("%d\n", cx);

    printf("%d >> 1 = ", cx);
    cx = cx >> 1;
    printf("%d\n\n", cx);

    // Asignacion compuesta

    printf("%d += %d = ", cx, cy);
    cx += cy;
    printf("%d\n", cx);

    printf("%d -= %d = ", cx, cy);
    cx -= cy;
    printf("%d\n", cx);

    printf("%d *= %d = ", cx, cy);
    cx *= cy;
    printf("%d\n", cx);

    printf("%d /= %d = ", cx, cy);
    cx /= cy;
    printf("%d\n", cx);

    printf("%d mod= %d = ", cx, cy);
    cx %= cy;
    printf("%d\n", cx);

    printf("%d <<= 1 = ", cx);
    cx <<= 1;
    printf("%d\n", cx);

    printf("%d >>= 1 = ", cx);
    cx >>= 1;
    printf("%d\n", cx);

    printf("%d &= %d = ", cx, cy);
    cx &= cy;
    printf("%d\n", cx);

    printf("%d ^= %d = ", cx, cy);
    cx ^= cy;
    printf("%d\n", cx);

    printf("%d |= %d = ", cx, cy);
    cx |= cy;
    printf("%d\n\n", cx);

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