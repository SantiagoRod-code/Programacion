#include <stdio.h>
#include <string.h>

#define MAX_TEXTO 10000
#define MIN_TEXTO 2000

// Acllmacenar los resultados de modificar
typedef struct {
    char original[MAX_TEXTO];
    char modificado[MAX_TEXTO];
    int reemplazos;
} Resultado;

void cargar(int *ptr, char *texto);
Resultado * modificar(char *ptrTexto, int longitud, char buscado, char reemplazo);
void contar(char *ptrTexto, int longitud, char caracter, int *ptrCuantos);
void buscar(char *ptrTexto, int longitud, char *buscado);

void mostrarModificacion(Resultado *resultado);
void mostrarConteo(int cantidad);
char leerCaracter(void);
void limpiarLinea(void);
void mostrarMenu(void);

// Cargar texto
void cargar(int *ptr, char *texto) {
    printf("Cuantos caracteres deseas ingresar? (2000 a 9999): ");

    scanf("%d", ptr);
    limpiarLinea();

    while (*ptr < MIN_TEXTO || *ptr >= MAX_TEXTO) {
        printf("Longitud no valida. Ingresa un valor entre 2000 y 9999: ");
        scanf("%d", ptr);
        limpiarLinea();
    }

    printf("Ingresa tu texto:\n");

    for (int i = 0; i < *ptr; i++) {
        *(texto + i) = (char)getchar();
    }

    *(texto + *ptr) = '\0';
}

// Modificar texto
Resultado * modificar(char *ptrTexto, int longitud, char buscado, char reemplazo) {

    static Resultado resultado;

    resultado.reemplazos = 0;

    for (int i = 0; i < longitud; i++) {

        resultado.original[i] = *(ptrTexto + i);

        if (*(ptrTexto + i) == buscado) {
            resultado.modificado[i] = reemplazo;
            resultado.reemplazos++;
        } else {
            resultado.modificado[i] = *(ptrTexto + i);
        }
    }

    resultado.original[longitud] = '\0';
    resultado.modificado[longitud] = '\0';

    return &resultado;
}

// Contar caracteres
void contar(char *ptrTexto, int longitud,
            char caracter, int *ptrCuantos) {

    *ptrCuantos = 0;

    for (int i = 0; i < longitud; i++) {
        if (*(ptrTexto + i) == caracter) {
            (*ptrCuantos)++;
        }
    }
}

// Buscar primera ocurrencia
void buscar(char *ptrTexto, int longitud, char *buscado) {

    char *posicion = NULL;

    printf("Ingresa el caracter que deseas buscar: ");
    *buscado = leerCaracter();

    for (int i = 0; i < longitud; i++) {

        if (*(ptrTexto + i) == *buscado) {
            posicion = ptrTexto + i;
            break;
        }
    }

    if (posicion != NULL) {
        printf("\nPrimera ocurrencia encontrada.\n");
        printf("Texto a partir de esa posicion:\n");
        printf("%s\n", posicion);
    } else {
        printf("\nEl caracter no existe en el texto.\n");
    }
}

// Mostrar modificacion
void mostrarModificacion(Resultado *resultado) {

    printf("\n----- TEXTO ORIGINAL -----\n");
    printf("%s\n", resultado->original);

    printf("\n----- TEXTO MODIFICADO -----\n");
    printf("%s\n", resultado->modificado);

    printf("\nCantidad de reemplazos: %d\n", resultado->reemplazos);
}

// Mostrar conteo
void mostrarConteo(int cantidad) {
    printf("\nEl caracter aparece %d veces en el texto.\n", cantidad);
}

// Leer un caracter, incluyendo representaciones especiales
char leerCaracter(void) {
    char entrada[20];

    fgets(entrada, sizeof(entrada), stdin);

    if (strcmp(entrada, "\\n\n") == 0)
        return '\n';

    if (strcmp(entrada, "\\t\n") == 0)
        return '\t';

    if (strcmp(entrada, "\\r\n") == 0)
        return '\r';

    if (strcmp(entrada, "\\\\\n") == 0)
        return '\\';

    return entrada[0];
}

// Limpiar caracteres pendientes de entrada
void limpiarLinea(void) {
    int c;

    while ((c = getchar()) != '\n' && c != EOF);
}

// Mostrar menu
void mostrarMenu(void) {
    printf("\n MENU \n");
    printf("1. Modificar\n");
    printf("2. Contar\n");
    printf("3. Buscar\n");
    printf("4. Salir\n");
}

int main(void) {

    char texto[MAX_TEXTO];
    int longitud;
    int opcion;
    int cantidad;
    char buscado;
    char reemplazo;

    Resultado *resultado;

    cargar(&longitud, texto);
    printf("\nTexto cargado correctamente. Longitud: %d\n", longitud);

    do {
        mostrarMenu();

        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
        limpiarLinea();

        switch (opcion) {

            case 1:
                printf("Caracter que deseas reemplazar: ");
                buscado = leerCaracter();

                printf("Caracter de reemplazo: ");
                reemplazo = leerCaracter();

                resultado = modificar(texto, longitud, buscado, reemplazo);

                mostrarModificacion(resultado);
                break;

            case 2:
                printf("Caracter que deseas contar: ");
                buscado = leerCaracter();

                contar(texto, longitud, buscado, &cantidad);

                mostrarConteo(cantidad);
                break;

            case 3:
                buscar(texto, longitud, &buscado);
                break;

            case 4:
                printf("\nFinalizando programa...\n");
                break;

            default:
                printf("\nOpcion no valida.\n");
        }

    } while (opcion != 4);

    return 0;
}
