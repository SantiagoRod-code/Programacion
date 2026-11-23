#include <stdio.h>

#define MIN_ALUMNOS 15
#define MAX_ALUMNOS 32
#define MAX_NOMBRE 50

#define NUM_TAREAS 2
#define PESO_TAREAS 0.20f
#define PESO_TRABAJOS 0.30f
#define PESO_EXAMENES 0.50f

int leerCantidadAlumnos(void);
float leerCalificacion(int alumno, const char rubro[], int numero);

int main(int argv, char *arg[]) {
    char nombres[MAX_ALUMNOS][MAX_NOMBRE];
    char boletas[MAX_ALUMNOS][20];

    float tareas[MAX_ALUMNOS][NUM_TAREAS];
    float trabajos[MAX_ALUMNOS];
    float examenes[MAX_ALUMNOS];
    float promedios[MAX_ALUMNOS];

    int alumnos = leerCantidadAlumnos();

    for (int i = 0; i < alumnos; i++) {
        float promedioTareas;

        printf("\nAlumno %d \n", i + 1);

        printf("Nombre completo: ");
        scanf(" %49[^\n]", nombres[i]);

        printf("Numero de boleta: ");
        scanf(" %19s", boletas[i]);

        for (int j = 0; j < NUM_TAREAS; j++) {
            tareas[i][j] = leerCalificacion(i + 1, "Tarea", j + 1);
        }

        trabajos[i] = leerCalificacion(i + 1, "Trabajo", 1);
        examenes[i] = leerCalificacion(i + 1, "Examen", 1);

        promedioTareas = (tareas[i][0] + tareas[i][1]) / 2.0f;

        promedios[i] = promedioTareas * PESO_TAREAS +
                       trabajos[i] * PESO_TRABAJOS +
                       examenes[i] * PESO_EXAMENES;
    }

    printf("\nBOLETAS DEL GRUPO \n");
    printf("%-25s %-15s %10s\n",
           "Nombre", "No. Boleta", "Promedio");

    for (int i = 0; i < alumnos; i++) {
        printf("%-25s %-15s %10.2f\n",
               nombres[i], boletas[i], promedios[i]);
    }

    return 0;
}

// Solicita la cantidad de alumnos
int leerCantidadAlumnos(void) {
    int alumnos;

    do {
        printf("Numero de alumnos (%d a %d): ",
               MIN_ALUMNOS, MAX_ALUMNOS);

        if (scanf("%d", &alumnos) != 1) {
            while (getchar() != '\n');
            alumnos = 0;
        }

    } while (alumnos < MIN_ALUMNOS || alumnos > MAX_ALUMNOS);

    return alumnos;
}

// Solicita calificaciones entre 0 y 10
float leerCalificacion(int alumno, const char rubro[], int numero) {
    float valor;

    do {
        printf("Alumno %d - %s %d (0 a 10): ",
               alumno, rubro, numero);

        if (scanf("%f", &valor) != 1) {
            while (getchar() != '\n');
            valor = -1;
        }

    } while (valor < 0 || valor > 10);

    return valor;
}