#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {

    char letraS, letraY, letraR, DletraR;

    printf("Ingresa el caracter para la letra S: ");
    scanf(" %c", &letraS);

    printf("Ingresa el caracter para la letra Y: ");
    scanf(" %c", &letraY);

    printf("Ingresa el caracter para la letra R: ");
    scanf(" %c", &letraR);

    printf("Ingresa el caracter para la otra letra R: ");
    scanf(" %c", &DletraR);

    printf("********************************************************\n");

    printf("%c%c%c%c%c%c%c%c   %c%c        %c%c   %c%c%c%c%c%c      %c%c%c%c%c%c\n",
        letraS, letraS, letraS, letraS, letraS, letraS, letraS, letraS,
        letraY, letraY, letraY, letraY,
        letraR, letraR, letraR, letraR, letraR, letraR,
        DletraR, DletraR, DletraR, DletraR, DletraR, DletraR);

    printf("%c%c           %c%c    %c%c    %c%c    %c%c    %c%c    %c%c\n",
        letraS, letraS,
        letraY, letraY, letraY, letraY,
        letraR, letraR, letraR, letraR,
        DletraR, DletraR, DletraR, DletraR);

    printf("%c%c             %c%c%c%c      %c%c    %c%c    %c%c    %c%c\n",
        letraS, letraS,
        letraY, letraY, letraY, letraY,
        letraR, letraR, letraR, letraR,
        DletraR, DletraR, DletraR, DletraR);

    printf("%c%c%c%c%c%c%c%c        %c%c       %c%c%c%c%c%c      %c%c%c%c%c%c\n",
        letraS, letraS, letraS, letraS, letraS, letraS, letraS, letraS,
        letraY, letraY,
        letraR, letraR, letraR, letraR, letraR, letraR,
        DletraR, DletraR, DletraR, DletraR, DletraR, DletraR);

    printf("      %c%c        %c%c       %c%c  %c%c      %c%c  %c%c\n",
        letraS, letraS,
        letraY, letraY,
        letraR, letraR, letraR, letraR,
        DletraR, DletraR, DletraR, DletraR);

    printf("      %c%c        %c%c       %c%c    %c%c    %c%c    %c%c\n",
        letraS, letraS,
        letraY, letraY,
        letraR, letraR, letraR, letraR,
        DletraR, DletraR, DletraR, DletraR);

    printf("%c%c%c%c%c%c%c%c        %c%c       %c%c     %c%c   %c%c     %c%c\n",
        letraS, letraS, letraS, letraS, letraS, letraS, letraS, letraS,
        letraY, letraY,
        letraR, letraR, letraR, letraR,
        DletraR, DletraR, DletraR, DletraR);

    printf("********************************************************\n");

    printf("\n\n");

    printf("La programacion es algo genial !!!\n");

    return 0;
}