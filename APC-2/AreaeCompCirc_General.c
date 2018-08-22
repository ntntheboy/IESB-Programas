http://dontpad.com/2018-2/apc2/aula5

/*
EXERCÍCIO 3
	Escrever um programa apra implementar as seguintes funções de círculo:	
		float area(float raio)
		float comprimento(float raio)
		
	Seu programa deve usar uma terceira função que recebe ponteiro para as funções
	de círculo*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define PI 3.14

float calc(float x, float operacao(float)){
	return operacao(x);
}
	
float areacirc(float a){
	return PI*pow(a,2);
}

float comp(float b){
	return 2*PI*b;
}
	
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float r;
	
	printf("Digite o valor do Raio: ");
	scanf("%f", &r);
	
	system("cls");

	printf("Área do Círculo: %0.2f\n", calc(r, areacirc));
	printf("Comprimento do Círculo: %0.2f\n", calc(r, comp));
	
	return 0;
}
