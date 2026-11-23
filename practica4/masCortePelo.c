
#include <stdio.h>

int main() {
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
                char personaje;

                printf("\nElige tu personaje de anime favorito:");
                printf("\n1. Goku (Dragon Ball)");
                printf("\n2. Naruto (Naruto)");
                printf("\n3. Luffy (One Piece)");
                printf("\nOpcion: ");
                scanf(" %c", &personaje);

                if (personaje == '1') {
                    printf("Deberias pedir un corte estilo Goku.\n");
                } else if (personaje == '2') {
                    printf("Deberias pedir un corte estilo Naruto.\n");
                } else if (personaje == '3') {
                    printf("Deberias pedir un corte estilo Luffy.\n");
                } else {
                    printf("Personaje no valido.\n");
                }

            } else if (gusto == 'B' || gusto == 'b') {
                char personaje;

                printf("\nElige tu personaje de peliculas de accion:");
                printf("\n1. Dominic Toretto (Rapidos y Furiosos)");
                printf("\n2. John Wick (John Wick)");
                printf("\n3. James Bond (007)");
                printf("\nOpcion: ");
                scanf(" %c", &personaje);

                if (personaje == '1') {
                    printf("Deberias pedir un corte estilo Dominic Toretto.\n");
                } else if (personaje == '2') {
                    printf("Deberias pedir un corte estilo John Wick.\n");
                } else if (personaje == '3') {
                    printf("Deberias pedir un corte estilo James Bond.\n");
                } else {
                    printf("Personaje no valido.\n");
                }

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
                char personaje;

                printf("\nElige tu personaje de Disney favorito:");
                printf("\n1. Rapunzel (Enredados)");
                printf("\n2. Elsa (Frozen)");
                printf("\n3. Merida (Valiente)");
                printf("\nOpcion: ");
                scanf(" %c", &personaje);

                if (personaje == '1') {
                    printf("Deberias pedir un corte estilo Rapunzel.\n");
                } else if (personaje == '2') {
                    printf("Deberias pedir un corte estilo Elsa.\n");
                } else if (personaje == '3') {
                    printf("Deberias pedir un corte estilo Merida.\n");
                } else {
                    printf("Personaje no valido.\n");
                }

            } else if (gusto == 'C' || gusto == 'c') {
                char personaje;

                printf("\nElige tu personaje de pelicula de comedia favorito:");
                printf("\n1. Regina George (Chicas Pesadas)");
                printf("\n2. Elle Woods (Legalmente Rubia)");
                printf("\n3. Mia Thermopolis (El diario de la princesa)");
                printf("\nOpcion: ");
                scanf(" %c", &personaje);

                if (personaje == '1') {
                    printf("Deberias pedir un corte estilo Regina George.\n");
                } else if (personaje == '2') {
                    printf("Deberias pedir un corte estilo Elle Woods.\n");
                } else if (personaje == '3') {
                    printf("Deberias pedir un corte estilo Mia Thermopolis.\n");
                } else {
                    printf("Personaje no valido.\n");
                }

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
