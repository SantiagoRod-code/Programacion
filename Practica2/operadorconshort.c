#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMITE 32767

int main(int argc, char *argv[]) {

    srand(time(NULL));

    // Tipo de datos: short para cx y cy
    short cx = 1 + rand() % LIMITE;
    short cy = 1 + rand() % LIMITE;

    // Variables de casteo o mutacion
    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;

    //CARACTERES short

    printf("Caracter cx = %d\n", cx);
    printf("Caracter cy = %d\n\n", cy);

    // Operadores aritmeticos

    printf("%d * %d = ", cx, cy);
    cx = (short)(cx * cy);
    printf("%d\n\n", cx);

    printf("%d / %d = ", cx, cy);
    cx = (short)(cx / cy);
    printf("%d\n\n", cx);

    printf("%d mod %d = ", cx, cy);
    cx = (short)(cx % cy);
    printf("%d\n\n", cx);

    printf("%d + %d = ", cx, cy);
    cx = (short)(cx + cy);
    printf("%d\n\n", cx);

    printf("%d - %d = ", cx, cy);
    cx = (short)(cx - cy);
    printf("%d\n\n", cx);

    cx++;
    printf("cx++ = %d\n", cx);

    cx--;
    printf("cx-- = %d\n", cx);

    ++cx;
    printf("++cx = %d\n", cx);

    --cx;
    printf("--cx = %d\n", cx);

    cx = (short)+cy;
    printf("cx = +cy = %d\n", cx);

    cx = (short)-cy;
    printf("cx = -cy = %d\n\n", cx);

    // Operadores relacionales

    if (cx > cy) {
        printf("cx es mayor que cy\n");
    }

    if (cx >= cy) {
        printf("cx es mayor o igual que cy\n");
    }

    if (cx < cy) {
        printf("cx es menor que cy\n");
    }

    if (cx <= cy) {
        printf("cx es menor o igual que cy\n");
    }

    if (cx == cy) {
        printf("cx es igual a cy\n");
    }

    if (cx != cy) {
        printf("cx es diferente a cy\n");
    }

    // Operadores de bits

    cx = (short)~cy;
    printf("cx = ~cy = %d\n", cx);

    printf("%d & %d = ", cx, cy);
    cx = (short)(cx & cy);
    printf("%d\n", cx);

    printf("%d | %d = ", cx, cy);
    cx = (short)(cx | cy);
    printf("%d\n", cx);

    printf("%d ^ %d = ", cx, cy);
    cx = (short)(cx ^ cy);
    printf("%d\n", cx);

    printf("%d << 1 = ", cx);
    cx = (short)(cx << 1);
    printf("%d\n", cx);

    printf("%d >> 1 = ", cx);
    cx = (short)(cx >> 1);
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

    c = (char)cx;
    printf("char: %c %d\n", c, (int)c);

    s = (short)cx;
    printf("short: %d\n", s);

    i = (int)cx;
    printf("int: %d\n", i);

    l = (long)cx;
    printf("long: %ld\n", l);

    ll = (long long)cx;
    printf("long long: %lld\n", ll);

    f = (float)cx;
    printf("float: %f\n", f);

    d = (double)cx;
    printf("double: %lf\n", d);

    ld = (long double)cx;
    printf("long double: %Lf\n", ld);

    return 0;
}