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
void leerEmpleado(Empleado empleados[], int *cantidad);
void leerDatos(Empleado *empleado);
void mostrarMayorMenor(Empleado empleados[], int cantidad);
int buscarEmpleado(Empleado empleados[], int cantidad);
void modificarEmpleado(Empleado empleados[], int cantidad);
void mostrarProgramadores(Empleado empleados[], int cantidad);
void mostrarEmpleados(Empleado empleados[], int cantidad);
void darDeBaja(Empleado empleados[], int cantidad);
int compararTexto(char texto1[], char texto2[]);

int main(int argv, char *arg[]) {
    menu();
    return 0;
}

void menu(void) {
    Empleado empleados[MAX];
    int cantidad = 0;
    int opcion;

    do {
        printf("\nDATA SYSTEM CORP \n");
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
                int posicion = buscarEmpleado(empleados, cantidad);

                if (posicion != -1) {
                    printf("\nEmpleado encontrado:\n");
                    printf("Nombre: %s\n", empleados[posicion].nombre);
                    printf("Sexo: %c\n", empleados[posicion].sexo);
                    printf("Puesto: %s\n", empleados[posicion].puesto);
                    printf("Sueldo: $%.2f\n", empleados[posicion].sueldo);
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

void leerEmpleado(Empleado empleados[], int *cantidad) {
    if (*cantidad >= MAX) {
        printf("\nNo hay espacio para mas empleados.\n");
        return;
    }

    printf("\nREGISTRO DE EMPLEADO \n");

    leerDatos(&empleados[*cantidad]);

    empleados[*cantidad].activo = 1;
    (*cantidad)++;

    printf("\nEmpleado registrado correctamente.\n");
}

void leerDatos(Empleado *empleado) {
    printf("Nombre completo: ");
    scanf(" %49[^\n]", empleado->nombre);

    printf("Sexo (M/F): ");
    scanf(" %c", &empleado->sexo);

    printf("Puesto: ");
    scanf(" %39[^\n]", empleado->puesto);

    printf("Sueldo mensual: $");
    scanf("%f", &empleado->sueldo);

    while (empleado->sueldo <= 0) {
        printf("Sueldo no valido. Ingresa nuevamente: $");
        scanf("%f", &empleado->sueldo);
    }
}

void mostrarMayorMenor(Empleado empleados[], int cantidad) {
    int mayor = -1;
    int menor = -1;

    for (int i = 0; i < cantidad; i++) {
        if (empleados[i].activo == 1) {
            if (mayor == -1 || empleados[i].sueldo > empleados[mayor].sueldo) {
                mayor = i;
            }

            if (menor == -1 || empleados[i].sueldo < empleados[menor].sueldo) {
                menor = i;
            }
        }
    }

    if (mayor == -1) {
        printf("\nNo hay empleados registrados.\n");
        return;
    }

    printf("\nEMPLEADO CON MAYOR SUELDO\n");
    printf("Nombre: %s\n", empleados[mayor].nombre);
    printf("Puesto: %s\n", empleados[mayor].puesto);
    printf("Sueldo: $%.2f\n", empleados[mayor].sueldo);

    printf("\nEMPLEADO CON MENOR SUELDO\n");
    printf("Nombre: %s\n", empleados[menor].nombre);
    printf("Puesto: %s\n", empleados[menor].puesto);
    printf("Sueldo: $%.2f\n", empleados[menor].sueldo);
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

int buscarEmpleado(Empleado empleados[], int cantidad) {
    char nombre[50];

    printf("\nBUSCAR EMPLEADO \n");
    printf("Ingresa el nombre: ");
    scanf(" %49[^\n]", nombre);

    for (int i = 0; i < cantidad; i++) {
        if (empleados[i].activo == 1 &&
            compararTexto(empleados[i].nombre, nombre)) {
            return i;
        }
    }

    printf("\nEmpleado no encontrado.\n");
    return -1;
}

void modificarEmpleado(Empleado empleados[], int cantidad) {
    int posicion = buscarEmpleado(empleados, cantidad);

    if (posicion == -1) {
        return;
    }

    printf("\nMODIFICAR EMPLEADO \n");
    printf("Ingresa los nuevos datos:\n");

    leerDatos(&empleados[posicion]);

    printf("\nInformacion modificada correctamente.\n");
}

void mostrarProgramadores(Empleado empleados[], int cantidad) {
    int encontrados = 0;

    printf("\nPROGRAMADORES DE DATA SYSTEM CORP \n");

    for (int i = 0; i < cantidad; i++) {
        if (empleados[i].activo == 1 &&
            compararTexto(empleados[i].puesto, "Programador")) {

            printf("\nNombre: %s\n", empleados[i].nombre);
            printf("Sexo: %c\n", empleados[i].sexo);
            printf("Sueldo: $%.2f\n", empleados[i].sueldo);

            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("\nNo hay programadores registrados.\n");
    }
}

void mostrarEmpleados(Empleado empleados[], int cantidad) {
    int encontrados = 0;

    printf("\nLISTA DE EMPLEADOS\n");

    for (int i = 0; i < cantidad; i++) {
        if (empleados[i].activo == 1) {
            printf("\nNombre: %s\n", empleados[i].nombre);
            printf("Sexo: %c\n", empleados[i].sexo);
            printf("Puesto: %s\n", empleados[i].puesto);
            printf("Sueldo: $%.2f\n", empleados[i].sueldo);

            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("\nNo hay empleados registrados.\n");
    }
}

void darDeBaja(Empleado empleados[], int cantidad) {
    int posicion = buscarEmpleado(empleados, cantidad);

    if (posicion == -1) {
        return;
    }

    empleados[posicion].activo = 0;

    printf("\nEmpleado dado de baja correctamente.\n");
}
