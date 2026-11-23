#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  float numeroFloatUno, numeroFloatDos;
  int numeroUno, numeroDos;
  int numeroTres, numeroCuatro;
  int limite = 100;

  srand(time(NULL));

  numeroUno = rand() % limite;
  numeroDos = rand() % limite;
  numeroTres = rand() % limite;
  numeroCuatro = rand() % limite;
  numeroFloatUno = (float)numeroUno + numeroTres / 100.0;
  numeroFloatDos = (float)numeroDos + numeroCuatro / 100.0;

  printf("numeroUno = %d\n", numeroUno);
  printf("numeroDos = %d\n", numeroDos);
  printf("numeroTres = %d\n", numeroTres);
  printf("numeroCuatro = %d\n", numeroCuatro);
  printf("numeroFloatUno = %f\n", numeroFloatUno);
  printf("numeroFloatDos = %f\n", numeroFloatDos);
  return 0;
}