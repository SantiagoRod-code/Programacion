
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TEXTO 6007
#define MAX_LINEA 1002

void cargar(char *);
void esVocal(char, int *);
int esConsonante(char);
void contarVocales(char *);
void contarConsonantes(char *);
void contarEspeciales(char *);
void contarEspacios(char *);

int main(void) {
    char texto[MAX_TEXTO];
    int opcion;

    cargar(texto);

    do {
        printf("\n MENU \n");
        printf("1. Cuenta vocales\n");
        printf("2. Cuenta consonantes\n");
        printf("3. Cuenta caracteres especiales\n");
        printf("4. Cuenta caracteres de espacio en blanco\n");
        printf("5. Salir\n");
        printf("Selecciona una opcion: ");

        if (scanf("%d", &opcion) != 1) {
            printf("Opcion no valida.\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF);

            continue;
        }

        while (getchar() != '\n');

        switch (opcion) {
            case 1:
                contarVocales(texto);
                break;

            case 2:
                contarConsonantes(texto);
                break;

            case 3:
                contarEspeciales(texto);
                break;

            case 4:
                contarEspacios(texto);
                break;

            case 5:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }

    } while (opcion != 5);

    return 0;
}

// cargar texto
void cargar(char *texto) {
    char linea[MAX_LINEA];
    int caracteres;

    do {
        texto[0] = '\0';

        printf("Ingresa un texto de minimo 1500 caracteres.\n");
        printf("Puedes utilizar hasta 6 lineas.\n\n");

        for (int i = 0; i < 6; i++) {
            printf("Linea %d: ", i + 1);

            if (fgets(linea, sizeof(linea), stdin) == NULL) {
                return;
            }

            strcat(texto, linea);

            // Limpiar caracteres si la linea supera el buffer
            if (strchr(linea, '\n') == NULL) {
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
            }
        }

        caracteres = strlen(texto);

        if (caracteres < 1500) {
            printf("\nEl texto tiene %d caracteres.\n", caracteres);
            printf("Necesitas ingresar al menos 1500.\n\n");
        }

    } while (caracteres < 1500);

    printf("\nTexto almacenado correctamente.\n");
    printf("Total de caracteres: %d\n", caracteres);
}

//determina si es vocales
void esVocal(char caracter, int *ptrContador) {
    char letra = (char)tolower((unsigned char)caracter);

    if (letra == 'a' || letra == 'e' ||
        letra == 'i' || letra == 'o' ||
        letra == 'u') {

        (*ptrContador)++;
    }
}

//determina si es consonantes
int esConsonante(char caracter) {
    char letra = (char)tolower((unsigned char)caracter);

    if (isalpha((unsigned char)letra) &&
        letra != 'a' && letra != 'e' &&
        letra != 'i' && letra != 'o' &&
        letra != 'u') {

        return 1;
    }

    return 0;
}

void contarVocales(char *texto) {
    int contador = 0;

    while (*texto != '\0') {
        esVocal(*texto, &contador);
        texto++;
    }

    printf("\nCantidad de vocales: %d\n", contador);
}

void contarConsonantes(char *texto) {
    int contador = 0;

    while (*texto != '\0') {
        if (esConsonante(*texto)) {
            contador++;
        }

        texto++;
    }

    printf("\nCantidad de consonantes: %d\n", contador);
}

void contarEspeciales(char *texto) {
    int contador = 0;

    while (*texto != '\0') {
        if (!isalnum((unsigned char)*texto) &&
            !isspace((unsigned char)*texto)) {

            contador++;
        }

        texto++;
    }

    printf("\nCantidad de caracteres especiales: %d\n",contador);
}

void contarEspacios(char *texto) {
    int contador = 0;

    while (*texto != '\0') {
        if (isspace((unsigned char)*texto)) {
            contador++;
        }

        texto++;
    }

    printf("\nCantidad de espacios en blanco: %d\n",contador);
}
