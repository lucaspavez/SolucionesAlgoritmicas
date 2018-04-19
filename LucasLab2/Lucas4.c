//abrir el programa
//definir variables
//preguntar cuantos partidos gano, empato o perdio. Leer los resultados 
//realizar la operacion correspondiente con las variables
//dar el resultado de dicha operacion que en este caso son los puntos totales
//cerrar el programa

#include <stdio.h>
int main ()
{
	int puntostotales, ganados, empatados, perdidos,puntosganados , puntosempatados, puntosperdidos ;
	
	
	
	printf("¿cuantos partidos ganaron?  ");
	scanf("%d",&ganados);
	printf("¿cuantos partidos empataron?  ");
	scanf("%d",&empatados);
	printf("¿cuantos partidos perdieron?  ");
	scanf("%d",&perdidos);
	
	puntosganados = ganados*3;
	puntosempatados = empatados*1;
	puntosperdidos = 0;
	puntostotales = puntosganados + puntosempatados + puntosperdidos;
	
	printf("La cantidad de puntos que tienen hasta el momento es %d \n", puntostotales);
	printf("roberto fue elejido goleador del torneo");
	return 0;
}

	

