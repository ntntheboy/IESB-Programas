/*
Alterar o programa de enumeração da semana para permitir
que uma lanchonete faça promoção geral com descontos de 30% 
nos dias de semana. Final de semana o preço é normal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

enum SEMANA{
	DOMINGO, // 0
	SEGUNDA, // 1
	TERCA,
	QUARTA, //...
	QUINTA,
	SEXTA,
	SABADO // 6
	};

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int day;
	
	printf("Digite o dia:");
	scanf("%d", &day);
	
	if(day>=1 && day<=5){
		printf("O preço do lanche será de R$ 10,00\n");
	}
	else{
		printf("O preço do lanche será de R$ 7,00 (DESCONTO 30% POR FIM DE SEMANA)!\n");
	}
	
	return 0;
}
