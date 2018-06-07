#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

typedef struct ponto1 PONTO;
struct ponto1{
	float X; //abscissa
	float Y; //ordenada
};

float dist(PONTO p1, PONTO p2, float r){
	
	float d = sqrt(pow( (p2.X - p1.X) , 2) + pow( (p2.Y - p1.Y) , 2 ));
	
	if (d == r){
		return 1;
	}
	else{
		return 0;
	}
}

float area(float ra){
	return 3.14*(ra*ra);
}

float comp(float raio){
	return 2*3.14*raio;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	PONTO a, b;
	float raio;
	
	printf("Digite o Centro (P1): ");
	scanf("%f %f", &a.X , &a.Y);
	
	printf("Digite P2: ");
	scanf("%f %f", &b.X , &b.Y);
	
	printf("Digite o valor do Raio: ");
	scanf("%f", &raio);
	
	system("cls");
	
	if(dist(a,b,raio) == 1){
		printf("Está dentro do Círculo!\n");
	}
	else{
		printf("Está fora do Círculo!\n");
	}
	
	printf("Área do Círculo = %0.2f\n", area(raio) );
	printf("Comprimento do Círculo = %0.2f\n", comp(raio) );
	
}
