http://dontpad.com/2018-2/apc2/aula2

/*
Adaptar o programa de enumeração para incluir um vetor de 
strings com os dias da semana.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

enum SEMANA{
	DOMINGO,
	SEGUNDA,
	TERCA,
	QUARTA,
	QUINTA,
	SEXTA,
	SABADO
	};

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int day;
	char vetDias[7][20] = {
							"Domingo",
							"Segunda-Feira",
							"Terça-Feira",
							"Quarta-Feira",
							"Quinta-Feira",
							"Sexta-Feira",
							"Sábado"
	};
	
	printf("Digite o dia:");
	scanf("%d", &day);
	
	printf("Hoje é dia %s\n", vetDias[day]);
	
	
	if(day>=1 && day<=5){
		printf("O preço do lanche será de R$ 10,00\n");
	}
	else{
		printf("O preço do lanche será de R$ 7,00 (DESCONTO 30% POR FIM DE SEMANA)!\n");
	}
	
	return 0;
}
