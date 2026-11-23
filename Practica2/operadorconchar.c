#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMITE 127

int main(int argc, char *argv[]) {

    srand(time(NULL));

    // Tipo de datos: char para cx y cy
    char cx = 1 + rand() % LIMITE;
    char cy = 1 + rand() % LIMITE;

    // Variables de casteo o mutacion
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;

    //CARACTERES char/

    printf("Caracter cx: %c %d\n", cx, (int)cx);
    printf("Caracter cy: %c %d\n\n", cy, (int)cy);

    // Operadores Aritmeticos

    printf("%c * %c = ", cx, cy);
    cx = (char)(cx * cy);
    printf("%c %d\n\n", cx, (int)cx);

    printf("%c / %c = ", cx, cy);
    cx = (char)(cx / cy);
    printf("%c %d\n\n", cx, (int)cx);

    printf("%c mod %c = ", cx, cy);
    cx = (char)(cx % cy);
    printf("%c %d\n\n", cx, (int)cx);

    printf("%c + %c = ", cx, cy);
    cx = (char)(cx + cy);
    printf("%c %d\n\n", cx, (int)cx);

    printf("%c - %c = ", cx, cy);
    cx = (char)(cx - cy);
    printf("%c %d\n\n", cx, (int)cx);

    cx++;
    printf("cx++ = %c %d\n", cx, (int)cx);

    cx--;
    printf("cx-- = %c %d\n", cx, (int)cx);

    ++cx;
    printf("++cx = %c %d\n", cx, (int)cx);

    --cx;
    printf("--cx = %c %d\n", cx, (int)cx);

    cx = (char)+cy;
    printf("cx = +cy = %c %d\n", cx, (int)cx);

    cx = (char)-cy;
    printf("cx = -cy = %c %d\n\n", cx, (int)cx);

    // Operadores relacionales

    if (cx > cy) {
        printf("%c es mayor que %c\n", cx, cy);
    }

    if (cx >= cy) {
        printf("%c es mayor o igual que %c\n", cx, cy);
    }

    if (cx < cy) {
        printf("%c es menor que %c\n", cx, cy);
    }

    if (cx <= cy) {
        printf("%c es menor o igual que %c\n", cx, cy);
    }

    if (cx == cy) {
        printf("%c es igual a %c\n", cx, cy);
    }

    if (cx != cy) {
        printf("%c es diferente a %c\n", cx, cy);
    }

    // Operadores de Bits

    cx = (char)~cy;
    printf("cx = ~cy = %c %d\n", cx, (int)cx);

    printf("%c & %c = ", cx, cy);
    cx = (char)(cx & cy);
    printf("%c %d\n", cx, (int)cx);

    printf("%c | %c = ", cx, cy);
    cx = (char)(cx | cy);
    printf("%c %d\n", cx, (int)cx);

    printf("%c ^ %c = ", cx, cy);
    cx = (char)(cx ^ cy);
    printf("%c %d\n", cx, (int)cx);

    printf("%c << 1 = ", cx);
    cx = (char)(cx << 1);
    printf("%c %d\n", cx, (int)cx);

    printf("%c >> 1 = ", cx);
    cx = (char)(cx >> 1);
    printf("%c %d\n\n", cx, (int)cx);

    // Asignacion compuesta

    printf("%c += %c = ", cx, cy);
    cx += cy;
    printf("%c %d\n", cx, (int)cx);

    printf("%c -= %c = ", cx, cy);
    cx -= cy;
    printf("%c %d\n", cx, (int)cx);

    printf("%c *= %c = ", cx, cy);
    cx *= cy;
    printf("%c %d\n", cx, (int)cx);

    printf("%c /= %c = ", cx, cy);
    cx /= cy;
    printf("%c %d\n", cx, (int)cx);

    printf("%c mod= %c = ", cx, cy);
    cx %= cy;
    printf("%c %d\n", cx, (int)cx);

    printf("%c <<= 1 = ", cx);
    cx <<= 1;
    printf("%c %d\n", cx, (int)cx);

    printf("%c >>= 1 = ", cx);
    cx >>= 1;
    printf("%c %d\n", cx, (int)cx);

    printf("%c &= %c = ", cx, cy);
    cx &= cy;
    printf("%c %d\n", cx, (int)cx);

    printf("%c ^= %c = ", cx, cy);
    cx ^= cy;
    printf("%c %d\n", cx, (int)cx);

    printf("%c |= %c = ", cx, cy);
    cx |= cy;
    printf("%c %d\n\n", cx, (int)cx);

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