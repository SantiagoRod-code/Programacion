#include <stdio.h>

#define MIN_ALUMNOS 15
#define MAX_ALUMNOS 32

#define NUM_TAREAS 2
#define PESO_TAREAS 0.20f
#define PESO_TRABAJOS 0.30f
#define PESO_EXAMENES 0.50f

int leerCantidadAlumnos(void);
float leerCalificacion(int alumno, const char rubro[], int numero);

int main(int argv, char *arg[]) {
    float tareas[MAX_ALUMNOS][NUM_TAREAS];
    float trabajos[MAX_ALUMNOS];
    float examenes[MAX_ALUMNOS];
    float boletas[MAX_ALUMNOS];

    int alumnos;

    alumnos = leerCantidadAlumnos();

    for (int i = 0; i < alumnos; i++) {
        float promedioTareas;

        printf("\n Alumno %d \n", i + 1);

        for (int j = 0; j < NUM_TAREAS; j++) {
            tareas[i][j] = leerCalificacion(i + 1, "Tarea", j + 1);
        }

        trabajos[i] = leerCalificacion(i + 1, "Trabajo", 1);
        examenes[i] = leerCalificacion(i + 1, "Examen", 1);

        promedioTareas = (tareas[i][0] + tareas[i][1]) / 2.0f;

        boletas[i] = promedioTareas * PESO_TAREAS +
                     trabajos[i] * PESO_TRABAJOS +
                     examenes[i] * PESO_EXAMENES;
    }

    printf("\n BOLETAS DEL GRUPO \n");
    printf("%-8s %10s %10s %10s %10s\n",
           "Alumno", "Tareas", "Trabajo", "Examen", "Boleta");

    for (int i = 0; i < alumnos; i++) {
        float promedioTareas = (tareas[i][0] + tareas[i][1]) / 2.0f;

        printf("%-8d %10.2f %10.2f %10.2f %10.2f\n",
               i + 1, promedioTareas, trabajos[i],
               examenes[i], boletas[i]);
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
