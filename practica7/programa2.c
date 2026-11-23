#include <stdio.h>
#include <ctype.h>

#define MAX 100

typedef struct {
    char nombre[50];
    char sexo;
    char puesto[40];
    float sueldo;
    int activo;
} Empleado;

void menu(void);
void leerEmpleado(Empleado *empleados, int *cantidad);
void leerDatos(Empleado *ptr);
void mostrarMayorMenor(Empleado *empleados, int cantidad);
Empleado *buscarEmpleado(Empleado *empleados, int cantidad);
void modificarEmpleado(Empleado *empleados, int cantidad);
void mostrarProgramadores(Empleado *empleados, int cantidad);
void mostrarEmpleados(Empleado *empleados, int cantidad);
void darDeBaja(Empleado *empleados, int cantidad);
int compararTexto(char texto1[], char texto2[]);

int main() {
    menu();
    return 0;
}

void menu(void) {
    Empleado empleados[MAX];
    int cantidad = 0;
    int opcion;

    do {
        printf("\n===== DATA SYSTEM CORP =====\n");
        printf("1. Registrar empleado\n");
        printf("2. Mostrar mayor y menor sueldo\n");
        printf("3. Buscar empleado\n");
        printf("4. Modificar empleado\n");
        printf("5. Mostrar todos los programadores\n");
        printf("6. Dar de baja a un empleado\n");
        printf("7. Mostrar todos los empleados\n");
        printf("8. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                leerEmpleado(empleados, &cantidad);
                break;

            case 2:
                mostrarMayorMenor(empleados, cantidad);
                break;

            case 3: {
                Empleado *ptr = buscarEmpleado(empleados, cantidad);

                if (ptr != NULL) {
                    printf("\nEmpleado encontrado:\n");
                    printf("Nombre: %s\n", ptr->nombre);
                    printf("Sexo: %c\n", ptr->sexo);
                    printf("Puesto: %s\n", ptr->puesto);
                    printf("Sueldo: $%.2f\n", ptr->sueldo);
                }
                break;
            }

            case 4:
                modificarEmpleado(empleados, cantidad);
                break;

            case 5:
                mostrarProgramadores(empleados, cantidad);
                break;

            case 6:
                darDeBaja(empleados, cantidad);
                break;

            case 7:
                mostrarEmpleados(empleados, cantidad);
                break;

            case 8:
                printf("\nSaliendo del programa...\n");
                break;

            default:
                printf("\nOpcion no valida.\n");
        }

    } while (opcion != 8);
}

void leerEmpleado(Empleado *empleados, int *cantidad) {
    if (*cantidad >= MAX) {
        printf("\nNo hay espacio para mas empleados.\n");
        return;
    }

    printf("\n--- REGISTRO DE EMPLEADO ---\n");

    leerDatos(empleados + *cantidad);

    (empleados + *cantidad)->activo = 1;
    (*cantidad)++;

    printf("\nEmpleado registrado correctamente.\n");
}

void leerDatos(Empleado *ptr) {
    printf("Nombre completo: ");
    scanf(" %49[^\n]", ptr->nombre);

    printf("Sexo (M/F): ");
    scanf(" %c", &ptr->sexo);

    printf("Puesto: ");
    scanf(" %39[^\n]", ptr->puesto);

    printf("Sueldo mensual: $");
    scanf("%f", &ptr->sueldo);

    while (ptr->sueldo <= 0) {
        printf("Sueldo no valido. Ingresa nuevamente: $");
        scanf("%f", &ptr->sueldo);
    }
}

void mostrarMayorMenor(Empleado *empleados, int cantidad) {
    Empleado *ptr;
    Empleado *mayor = NULL;
    Empleado *menor = NULL;

    for (ptr = empleados; ptr < empleados + cantidad; ptr++) {
        if (ptr->activo == 1) {
            if (mayor == NULL || ptr->sueldo > mayor->sueldo) {
                mayor = ptr;
            }

            if (menor == NULL || ptr->sueldo < menor->sueldo) {
                menor = ptr;
            }
        }
    }

    if (mayor == NULL) {
        printf("\nNo hay empleados registrados.\n");
        return;
    }

    printf("\n--- EMPLEADO CON MAYOR SUELDO ---\n");
    printf("Nombre: %s\n", mayor->nombre);
    printf("Puesto: %s\n", mayor->puesto);
    printf("Sueldo: $%.2f\n", mayor->sueldo);

    printf("\n--- EMPLEADO CON MENOR SUELDO ---\n");
    printf("Nombre: %s\n", menor->nombre);
    printf("Puesto: %s\n", menor->puesto);
    printf("Sueldo: $%.2f\n", menor->sueldo);
}

int compararTexto(char texto1[], char texto2[]) {
    int i = 0;

    while (texto1[i] != '\0' && texto2[i] != '\0') {
        if (tolower((unsigned char)texto1[i]) !=
            tolower((unsigned char)texto2[i])) {
            return 0;
        }
        i++;
    }

    return texto1[i] == texto2[i];
}

Empleado *buscarEmpleado(Empleado *empleados, int cantidad) {
    Empleado *ptr;
    char nombre[50];

    printf("\n--- BUSCAR EMPLEADO ---\n");
    printf("Ingresa el nombre: ");
    scanf(" %49[^\n]", nombre);

    for (ptr = empleados; ptr < empleados + cantidad; ptr++) {
        if (ptr->activo == 1 &&
            compararTexto(ptr->nombre, nombre)) {
            return ptr;
        }
    }

    printf("\nEmpleado no encontrado.\n");
    return NULL;
}

void modificarEmpleado(Empleado *empleados, int cantidad) {
    Empleado *ptr = buscarEmpleado(empleados, cantidad);

    if (ptr == NULL) {
        return;
    }

    printf("\n--- MODIFICAR EMPLEADO ---\n");
    printf("Ingresa los nuevos datos:\n");

    leerDatos(ptr);

    printf("\nInformacion modificada correctamente.\n");
}

void mostrarProgramadores(Empleado *empleados, int cantidad) {
    Empleado *ptr;
    int encontrados = 0;

    printf("\n--- PROGRAMADORES DE DATA SYSTEM CORP ---\n");

    for (ptr = empleados; ptr < empleados + cantidad; ptr++) {
        if (ptr->activo == 1 &&
            compararTexto(ptr->puesto, "Programador")) {

            printf("\nNombre: %s\n", ptr->nombre);
            printf("Sexo: %c\n", ptr->sexo);
            printf("Sueldo: $%.2f\n", ptr->sueldo);

            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("\nNo hay programadores registrados.\n");
    }
}

void mostrarEmpleados(Empleado *empleados, int cantidad) {
    Empleado *ptr;
    int encontrados = 0;

    printf("\n--- LISTA DE EMPLEADOS ---\n");

    for (ptr = empleados; ptr < empleados + cantidad; ptr++) {
        if (ptr->activo == 1) {
            printf("\nNombre: %s\n", ptr->nombre);
            printf("Sexo: %c\n", ptr->sexo);
            printf("Puesto: %s\n", ptr->puesto);
            printf("Sueldo: $%.2f\n", ptr->sueldo);

            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("\nNo hay empleados registrados.\n");
    }
}

void darDeBaja(Empleado *empleados, int cantidad) {
    Empleado *ptr = buscarEmpleado(empleados, cantidad);

    if (ptr == NULL) {
        return;
    }

    ptr->activo = 0;

    printf("\nEmpleado dado de baja correctamente.\n");
}