#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
    char genero;
    printf("Eres hombre o mujer? (H/M): ");
    scanf(" %c", &genero);

    if (genero == 'H' || genero == 'h') {
        char tipoCorte;
        printf("Que tipo de corte deseas superheroe o supervillano? (S/V): ");
        scanf(" %c", &tipoCorte);

        if (tipoCorte == 'S' || tipoCorte == 's') {
            char gusto;
            printf("Prefieres el sushi o el bistec? (S/B): ");
            scanf(" %c", &gusto);
            if (gusto == 'S' || gusto == 's') {
                printf("Deberia pedir un corte de copete\n");
            } else if (gusto == 'B' || gusto == 'b') {
                printf("Deberia pedir un corte de parte superior plana\n");
            } else {
                printf("Gusto no valido.\n");
            }

        } else if (tipoCorte == 'V' || tipoCorte == 'v') {
            printf("Deberia pedir un corte Mohicano\n");
        } else {
            printf("Tipo de corte no valido.\n");
        }

    } else if (genero == 'M' || genero == 'm') {
        char tipoCorte;
        printf("Que tipo de corte deseas superheroe o supervillano? (S/V): ");
        scanf(" %c", &tipoCorte);

        if (tipoCorte == 'S' || tipoCorte == 's') {
            char gusto;
            printf("Prefieres peliculas de animacion o comedia? (A/C): ");
            scanf(" %c", &gusto);
            if (gusto == 'A' || gusto == 'a') {
                printf("Deberia pedir un corte de flequillo\n");
            } else if (gusto == 'C' || gusto == 'c') {
                printf("Deberia pedir un corte de sacudida\n");
            } else {
                printf("Gusto no valido.\n");
            }

        } else if (tipoCorte == 'V' || tipoCorte == 'v') {
            printf("Deberia pedir un corte Mohicano\n");
        } else {
            printf("Tipo de corte no valido.\n");
        }
    } else {
        printf("Genero no valido.\n");
    }

    return 0;
}