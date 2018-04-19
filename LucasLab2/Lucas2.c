//abrir el programa
//definir variables
//pedir un numero del 1 al 9 y leerlo 
//definir el while y el for
//entregar la piramide correspondiente al numero
//cerrar el programa
#include <stdio.h>
int main ()
{
	int n, a,b,c;
	while (n<1 || n>9){
		printf("ingrese un numero del 1 al 9  ");
		scanf("%d",&n);
	}
	
	for (a=1 ; a<= n ;a++){
		for (b=1 ; b<=a ; b++){
			printf ("%d",b);
			if (b==a){
				for(c=b-1;c>0;c--){
					printf("%d",c);
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}

		
	
