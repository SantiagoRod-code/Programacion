#include <stdio.h>
#include <math.h>

#define FILAS 9
#define COLUMNAS 17

#define MIN_TEMP -30.0f
#define MAX_TEMP 10.0f
#define MAX_VIENTO 64.0f

float calcularSensacion(float temperatura, float viento);
void llenarTabla(float tabla[FILAS][COLUMNAS]);
const char *obtenerRiesgo(float sensacion);

int main(int argv, char *arg[]) {
    float tabla[FILAS][COLUMNAS];
    float temperatura, viento;
    int fila, columna;

    llenarTabla(tabla);

    printf("Temperatura (-30 a 10 C): ");
    if (scanf("%f", &temperatura) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    printf("Velocidad del viento (0 a 64 km/h): ");
    if (scanf("%f", &viento) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    if (temperatura > MAX_TEMP || temperatura < MIN_TEMP ||
        viento < 0 || viento > MAX_VIENTO) {
        printf("Valores fuera de los limites permitidos.\n");
        return 1;
    }

    fila = (int)roundf(viento / 8.0f);
    columna = (int)roundf((MAX_TEMP - temperatura) / 2.5f);

    if (fabsf(viento - fila * 8.0f) > 0.01f ||
        fabsf(temperatura - (MAX_TEMP - columna * 2.5f)) > 0.01f) {
        printf("Utiliza intervalos de 8 km/h y 2.5 C.\n");
        return 1;
    }

    printf("\nRESULTADOS \n");
    printf("Temperatura: %.2f C\n", temperatura);
    printf("Velocidad del viento: %.2f km/h\n", viento);
    printf("Sensacion termica: %.2f C\n", tabla[fila][columna]);
    printf("Riesgo: %s\n", obtenerRiesgo(tabla[fila][columna]));

    return 0;
}

// Calcula el indice de sensacion termica
float calcularSensacion(float temperatura, float viento) {
    float potencia = powf(viento, 0.16f);

    return 13.12f + 0.6215f * temperatura
           - 11.37f * potencia
           + 0.3965f * temperatura * potencia;
}

// Genera la matriz con los valores de sensacion termica
void llenarTabla(float tabla[FILAS][COLUMNAS]) {
    float temperatura, viento;

    for (int i = 0; i < FILAS; i++) {
        viento = i * 8.0f;

        for (int j = 0; j < COLUMNAS; j++) {
            temperatura = MAX_TEMP - j * 2.5f;

            tabla[i][j] = calcularSensacion(temperatura, viento);
        }
    }
}

// Identifica el nivel de riesgo
const char *obtenerRiesgo(float sensacion) {
    if (sensacion >= -27.5f)
        return "Moderado";
    else if (sensacion >= -39.5f)
        return "Grave";
    else
        return "Extremo";
}