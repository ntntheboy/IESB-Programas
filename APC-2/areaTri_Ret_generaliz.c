http://www.dontpad.com/2018-2/apc2/aula5

/* EXERCÍCIO 2
	Escrever um programa para implementar as seguintes funções de cálculo de área
	de polígonos:
		float areaTriangulo(float base, float alt)
		float areaRetangulo(float lado1, float lado2)

	Seu programa deve usar uma terceira função que recebe ponteiro para as funções
	de área */
  

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float calc(float x, float y, float(*operacao) (float, float)){
	return operacao(x,y);
}
	
float areaTri(float a, float b){
	return (b*a)/2;
}

float areaRet(float l1, float l2){
	return l1*l2;
}
	
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float b, h, l1, l2;
	
	printf("Digite o valor da Base e Altura do Triangulo: ");
	scanf("%f %f", &b, &h);
	printf("Digite o valor do lado 1 e lado 2 do retangulo: ");
	scanf("%f %f", &l1,&l2);

	system("cls");

	printf("Área do Triangulo: %0.2f\n", calc(b, h, &areaTri));
	printf("Área do Retângulo: %0.2f\n", calc(l1, l2, &areaRet));
	
	return 0;
}
