http://dontpad.com/2018-2/apc2/aula3

/*
Escreva um programa em linguagem C que receba três valores 
flutuantes que representam a altura, a base maior e a base 
menor de um trapézio retângulo.
Seu programa deve conter 
	* uma função para calcular a área do trapézio
	* uma função para calcular o perímetro do trapézio.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define pi 3.14

float area(float a, float bMa, float bMe){
	return ((bMa + bMe)*a)/2;
}

float per(float bMa, float bMe, float l1, float l2){
	return bMa+bMe+l1+l2;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float alt, basMai, basMen, lado1, lado2;
	
	printf("Digite a Altura, Base Maior e a Base Menor: ");
	scanf("%f %f %f", &alt, &basMai, &basMen);
	printf("Digite o Valor do Lado 1 e Lado 2 do Trapézio: ");
	scanf("%f %f", &lado1, &lado2);
	
	system("cls");
	
	printf("Área = %0.2f\n", area(alt, basMai, basMen));
	printf("Perímetro = %0.2f\n", per(basMai, basMen, lado1, lado2));
	
	return 0;	
}
