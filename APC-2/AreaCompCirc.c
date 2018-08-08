http://dontpad.com/2018-2/apc2/aula3

/*
Escreva um programa que receba o raio de um círculo.
Em seu programa, crie:
	* uma função que retorne a área do círculo
	* uma função que retorne a comprimento da circunferência.
	
	área do círculo: pi * raio²
	comprimento da circunferência: 2 * pi * raio
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define pi 3.14

float area(float x){
	return pi*pow(x,2);
}

float comp(float x){
	return 2*pi*x;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float ra;
	
	printf("Digite o Valor do Raio da Circunferência: ");
	scanf("%f", &ra);
	
	system("cls");
	
	printf("Área do Círculo: %0.2f\n", area(ra) );
	printf("Comprimento da Circunferência: %0.2f\n", comp(ra) );
	
	return 0;	
}
