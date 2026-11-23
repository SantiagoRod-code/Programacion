#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int num1, num2;
	int limite = 100;
	
	srand(time(NULL));
	
	num1 = rand() % limite;
	num2 = rand() % limite;
	
	printf("numero 1 = %d\n", num1);
	printf("numero 2 = %d\n", num2);
}