#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

typedef struct cartesiano CARTESIANO;

struct cartesiano{
	float x; //Abcissa
	float y; //Ordenada
};


float dist(CARTESIANO a, CARTESIANO b){
	return sqrt( pow(a.x - b.x, 2) + pow(a.y - b.y, 2) );
}


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	CARTESIANO p1, p2, p3;
	float l1, l2, l3, p, s;
	
	printf("Digite o valor dos pontos 1, 2 e 3: ");
	scanf("%f %f %f %f %f %f", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y);
	
	l1 = dist(p1,p2);
	l2 = dist(p1,p3);
	l3 = dist(p2,p3);
	
	p = (float) (l1 + l2 + l3) / 2;
	
	s = sqrt(p * (p-l1) * (p-l2) * (p-l3));
	
	printf("%0.2f", s);
			
	return 0;
}
