#include <stdio.h>

int main(int argc, char *argv[]) {
    float horas;
    int dependientes;
    float pagoNormal = 19.88;
    float pagoExtra = 19.88 * 1.5;
    float pagoTotal;

    printf("Ingrese el numero de horas trabajadas: ");
    scanf("%f", &horas);

    printf("Ingrese el numero de dependientes: ");
    scanf("%d", &dependientes);

    if (horas > 40) {
        pagoTotal = (40 * pagoNormal) + ((horas - 40) * pagoExtra);
    } else {
        pagoTotal = horas * pagoNormal;
    }

    float seguroSocial = pagoTotal * 0.07;
    float impuestoRenta = pagoTotal * 0.14;
    float estatalRenta = pagoTotal * 0.05;
    float cuotaSindical = 12.00;
    float seguroMedico = 0.00;

    if (dependientes >= 3) {
        seguroMedico = 40.00;
    }

    float pagoNeto = pagoTotal - (
        seguroSocial + impuestoRenta + estatalRenta +
        cuotaSindical + seguroMedico
    );

    printf("\nRECIBO DE NOMINA\n");
    printf("Salario bruto: $%.2f\n", pagoTotal);
    printf("Seguro Social: $%.2f\n", seguroSocial);
    printf("Impuesto federal: $%.2f\n", impuestoRenta);
    printf("Impuesto estatal: $%.2f\n", estatalRenta);
    printf("Cuota sindical: $%.2f\n", cuotaSindical);
    printf("Seguro medico: $%.2f\n", seguroMedico);
    printf("Salario neto: $%.2f\n", pagoNeto);

    return 0;
}