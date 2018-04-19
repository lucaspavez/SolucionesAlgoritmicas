//abrir programa
//definir variables
//pedir el peso del niño
//realizar operaciones para la cantidad de gotas dependiendo de la edad
//informar al usuario la cantidad de gotas dependiendo de la edad
//cerrar programa
#include <stdio.h>
int main ()
{
	float peso, dosisdiaria1, gotas, gotas2;
	
	
	printf("ingrese el peso del niño \n");
	scanf("%f",&peso);
	dosisdiaria1=(0.2*peso);
	gotas=dosisdiaria1*5;
	gotas2 = gotas/3;
	
	printf("la cantidad de gotitas por dia si el niño es mayor a 1 año debe ser %f\n",gotas);
	printf("la cantidad de gotitas por dia si el niño es menor a 1 año debe ser %f",gotas2);
	
	return 0;
}

