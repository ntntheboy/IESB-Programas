#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

typedef struct ponto PONTO;
struct ponto{
	float x;        //abscissa
	float y;	//ordenada
};


float distancia(PONTO p1, PONTO p2){
	return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2 ));
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	PONTO a, b;
	
	//entrada
	printf("Digite as coordenadas do ponto A: ");
	scanf("%f %f", &a.x, &a.y);

	printf("Digite as coordenadas do ponto B: ");
	scanf("%f %f", &b.x, &b.y);
	
	printf("Distância entre A e B: %0.2f\n\n", distancia(a, b));
	
	getch();
}
