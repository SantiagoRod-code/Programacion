#include <stdio.h>
#include <string.h>

#define MAX 30

struct Dato {
    char nombre[40];
    char pais[25];
};

struct Atleta {
    char deporte[30];
    struct Dato personal;
    int numeroMedallas;
};

// Prototipos
void leerAtletas(struct Atleta *ptr, int cantidad);
void mostrarMayor(struct Atleta *ptr, int cantidad);
void buscarAtleta(struct Atleta *ptr, int cantidad);
void modificarAtleta(struct Atleta *ptr, int cantidad);
void mostrarAtletas(struct Atleta *ptr, int cantidad);

int main() {
    struct Atleta atletas[MAX];
    int cantidad, opcion;

    printf("Cuantos atletas deseas registrar? (1-%d): ", MAX);
    scanf("%d", &cantidad);

    while (cantidad < 1 || cantidad > MAX) {
        printf("Cantidad no valida. Intenta nuevamente: ");
        scanf("%d", &cantidad);
    }

    leerAtletas(atletas, cantidad);

    do {
        printf("\n===== MENU DE ATLETAS =====\n");
        printf("1. Mostrar todos los atletas\n");
        printf("2. Mostrar atleta con mas medallas\n");
        printf("3. Buscar atleta\n");
        printf("4. Modificar datos de un atleta\n");
        printf("5. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                mostrarAtletas(atletas, cantidad);
                break;

            case 2:
                mostrarMayor(atletas, cantidad);
                break;

            case 3:
                buscarAtleta(atletas, cantidad);
                break;

            case 4:
                modificarAtleta(atletas, cantidad);
                break;

            case 5:
                printf("\nSaliendo del programa...\n");
                break;

            default:
                printf("\nOpcion no valida.\n");
        }

    } while (opcion != 5);

    return 0;
}

// Funcion para leer los datos de los atletas
void leerAtletas(struct Atleta *ptr, int cantidad) {
    int i;

    for (i = 0; i < cantidad; i++) {
        printf("\n--- ATLETA %d ---\n", i + 1);

        printf("Nombre: ");
        scanf(" %39[^\n]", (ptr + i)->personal.nombre);

        printf("Pais: ");
        scanf(" %24[^\n]", (ptr + i)->personal.pais);

        printf("Deporte: ");
        scanf(" %29[^\n]", (ptr + i)->deporte);

        printf("Numero de medallas: ");
        scanf("%d", &(ptr + i)->numeroMedallas);

        while ((ptr + i)->numeroMedallas < 0) {
            printf("Numero no valido. Intenta nuevamente: ");
            scanf("%d", &(ptr + i)->numeroMedallas);
        }
    }
}

// Funcion para mostrar al atleta con mayor numero de medallas
void mostrarMayor(struct Atleta *ptr, int cantidad) {
    int i, mayor = 0;

    for (i = 1; i < cantidad; i++) {
        if ((ptr + i)->numeroMedallas > (ptr + mayor)->numeroMedallas) {
            mayor = i;
        }
    }

    printf("\n--- ATLETA CON MAS MEDALLAS ---\n");
    printf("Nombre: %s\n", (ptr + mayor)->personal.nombre);
    printf("Pais: %s\n", (ptr + mayor)->personal.pais);
    printf("Deporte: %s\n", (ptr + mayor)->deporte);
    printf("Medallas: %d\n", (ptr + mayor)->numeroMedallas);
}

// Funcion para buscar un atleta por su nombre
void buscarAtleta(struct Atleta *ptr, int cantidad) {
    char nombre[40];
    int i, encontrado = 0;

    printf("\nIngresa el nombre del atleta que deseas buscar: ");
    scanf(" %39[^\n]", nombre);

    for (i = 0; i < cantidad; i++) {
        if (strcmp((ptr + i)->personal.nombre, nombre) == 0) {
            printf("\nAtleta encontrado:\n");
            printf("Nombre: %s\n", (ptr + i)->personal.nombre);
            printf("Pais: %s\n", (ptr + i)->personal.pais);
            printf("Deporte: %s\n", (ptr + i)->deporte);
            printf("Medallas: %d\n", (ptr + i)->numeroMedallas);

            encontrado = 1;
            break;
        }
    }

    if (encontrado == 0) {
        printf("\nNo se encontro al atleta.\n");
    }
}

// Funcion para modificar los datos de un atleta
void modificarAtleta(struct Atleta *ptr, int cantidad) {
    char nombre[40];
    int i, encontrado = 0;

    printf("\nIngresa el nombre del atleta que deseas modificar: ");
    scanf(" %39[^\n]", nombre);

    for (i = 0; i < cantidad; i++) {
        if (strcmp((ptr + i)->personal.nombre, nombre) == 0) {
            printf("\nAtleta encontrado. Ingresa los nuevos datos:\n");

            printf("Nuevo nombre: ");
            scanf(" %39[^\n]", (ptr + i)->personal.nombre);

            printf("Nuevo pais: ");
            scanf(" %24[^\n]", (ptr + i)->personal.pais);

            printf("Nuevo deporte: ");
            scanf(" %29[^\n]", (ptr + i)->deporte);

            printf("Nuevo numero de medallas: ");
            scanf("%d", &(ptr + i)->numeroMedallas);

            while ((ptr + i)->numeroMedallas < 0) {
                printf("Numero no valido. Intenta nuevamente: ");
                scanf("%d", &(ptr + i)->numeroMedallas);
            }

            printf("\nDatos modificados correctamente.\n");
            encontrado = 1;
            break;
        }
    }

    if (encontrado == 0) {
        printf("\nNo se encontro al atleta.\n");
    }
}

// Funcion para mostrar todos los atletas registrados
void mostrarAtletas(struct Atleta *ptr, int cantidad) {
    int i;

    printf("\n===== LISTA DE ATLETAS =====\n");

    for (i = 0; i < cantidad; i++) {
        printf("\nAtleta %d\n", i + 1);
        printf("Nombre: %s\n", (ptr + i)->personal.nombre);
        printf("Pais: %s\n", (ptr + i)->personal.pais);
        printf("Deporte: %s\n", (ptr + i)->deporte);
        printf("Medallas: %d\n", (ptr + i)->numeroMedallas);
    }
}
