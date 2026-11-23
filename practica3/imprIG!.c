#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {

    char letraI, letraG, signo, letraO;

    // Entrada de datos desde teclado
    printf("Ingresa el caracter para la letra I: ");
    scanf(" %c", &letraI);

    printf("Ingresa el caracter para la letra G: ");
    scanf(" %c", &letraG);

    printf("Ingresa el caracter para el signo de exclamacion: ");
    scanf(" %c", &signo);

    printf("Ingresa el caracter para el punto: ");
    scanf(" %c", &letraO);

    // Impresion de IG!
    printf("****************************************\n");

    printf("%c%c%c%c%c%c%c%c%c%c%c      %c%c%c%c%c%c%c%c%c%c        %c%c\n",
        letraI, letraI, letraI, letraI, letraI, letraI, letraI, letraI, letraI, letraI, letraI,
        letraG, letraG, letraG, letraG, letraG, letraG, letraG, letraG, letraG, letraG,
        signo, signo);

    printf("    %c%c          %c          %c       %c%c\n",
        letraI, letraI, letraG, letraG, signo, signo);

    printf("    %c%c         %c            %c      %c%c\n",
        letraI, letraI, letraG, letraG, signo, signo);

    printf("    %c%c         %c                   %c%c\n",
        letraI, letraI, letraG, signo, signo);

    printf("    %c%c         %c       %c%c%c%c%c%c%c     %c%c\n",
        letraI, letraI, letraG,
        letraG, letraG, letraG, letraG, letraG, letraG, letraG,
        signo, signo);

    printf("    %c%c         %c            %c      %c%c\n",
        letraI, letraI, letraG, letraG, signo, signo);

    printf("    %c%c          %c          %c       %c%c\n",
        letraI, letraI, letraG, letraG, signo, signo);

    printf("%c%c%c%c%c%c%c%c%c%c%c      %c%c%c%c%c%c%c%c%c%c        %c%c\n",
        letraI, letraI, letraI, letraI, letraI, letraI, letraI, letraI, letraI, letraI, letraI,
        letraG, letraG, letraG, letraG, letraG, letraG, letraG, letraG, letraG, letraG,
        letraO, letraO);

    printf("****************************************\n");

    printf("\n\n");

    printf("La programacion es algo genial !!!\n");

    return 0;
}