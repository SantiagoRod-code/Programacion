#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	float numFloatUno, numFloatDos;
	int numUno, numDos, numTres, numCuatro;
	int limite = 100;
	
	srand(time(NULL));
	
	numUno = rand () % limite;
	numDos = rand () % limite;
	numTres = rand () % limite;
	numCuatro = rand () % limite;
	numFloatUno = (float) numUno + numTres / 100.0;
	numFloatDos = (float) numDos + numCuatro / 100.0;
	
	printf("numero uno = %d\n", numUno);
	printf("numumero dos = %d\n", numDos);
	printf("numero tres = %d\n", numTres);
	printf("numero cuatro = %d\n", numCuatro);
	
	printf("numero float uno = %f\n", numFloatUno);
	printf("numero float dos = %f\n", numFloatDos);
	return 0;
}