http://dontpad.com/2018-2/apc2/aula4

EXERCÍCIO 1
	Escrever um programa para implementar operações aritméticas	
		float soma(float a, float b)
		float subtracao(float a, float b)
		float multiplicacao(float a, float b)
		float divisao(float a, float b)
		float potencia(float b, float e)
	
	Seu programa deve usar uma terceira função que recebe ponteiro para as funções
	de operação aritmética


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float result(float a, float b, float (*operacao)(float, float)){
	return operacao(a,b);
}

float soma(float a, float b){
	return a+b;
}

float subt(float a, float b){
	return a-b;
}

float multi(float a, float b){
	return a*b;
}

float divis(float a, float b){
	return a/b;
}
float poten(float a, float b){
	return pow(a,b);
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float x, y;
	
	printf("Digite um número X e número Y: ");
	scanf("%f %f", &x ,&y);
	
	system("cls");	
	
	printf("Soma: %0.2f\n", result(x,y,&soma) );
	printf("Subtração: %0.2f\n", result(x,y,&subt) );
	printf("Multiplicação: %0.2f\n", result(x,y,&multi) );
	printf("Divisão: %0.2f\n", result(x,y,&divis) );
	printf("Potência (x^y): %0.2f\n", result(x,y,&poten) );
	
	return 0;	
}
