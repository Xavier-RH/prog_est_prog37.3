/* Autor: Xavier Romero Hernández, Realizado: 10/03/2022 
	Tomando como base el programa anterior, modificar el programa para que el usuario pueda calcular el área cuantas veces requiera,
	puede usar cualquier estrategia o ciclo visto en clases.
*/
	
#include <stdio.h>
#include <math.h>

int main(){
	float radio, angulo, area;
	int a;
	
	printf("Calculo de area de un sector circular\n");
	do{
		do{
			printf("\nIngrese el radio del circulo: ");
			scanf("%f",&radio);
			if(radio<=0){
				printf("\nValor no valido, ingrese un valor mayor a 0\n\n");
		}
		}while(radio<=0);
		do{
			printf("Ingrese el angulo del sector a calcular: ");
			scanf("%f",&angulo);
			if(angulo<=0){
				printf("\nValor no valido, ingrese un valor mayor a 0\n\n");
			}
		}while(angulo<=0);
		
		area=((M_PI*pow(radio,2))/360)*angulo;
	
		printf("\nEl area del sector circular es de %.2f u2\n\n",area);
		
		printf("¿Desea calcular el area de otro sector circular? (1.-Si, 2.-No): ");
		scanf("%d",&a);
	}while(a!=2);
	
	return 0;
}
