#include <iostream>
#include <stdio.h>
int main()
{
	int iDato1;
	int iDato2;
	int iResultado;

	printf("\n-----SUMA DE DATOS [DOS DATOS]------");
	printf("\ningresa tu primer numero:");
	scanf_s("%d", &iDato1);
	printf("ingresa tu segundo numero:\n");
	scanf_s("%d", &iDato2);

	iResultado = iDato1 + iDato2;

	printf("El resultado de la suma es: %d", iResultado);

	return 0;


}

