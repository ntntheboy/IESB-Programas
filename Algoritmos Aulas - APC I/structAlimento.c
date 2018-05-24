/*

-> Considere o trecho de código em Linguagem C a seguir que
  implementa um tipo alimento para um programa de controle
  nutricional.

->Monte a entrada de dados com 3 alimentos de uma refeição
->Monte a saída do programa

	Na impressão da saída, calcule:
	   -> A energia da porção do alimento;
	   -> A quantidade de sódio da porção do alimento;
		
  #include<stdlib.h>
  #include<stdio.h>
  #include<conio.h>
  #define N 3
  
  typedef struct alimento ALIMENTO; //definindo um novo tipo (alimento)
  
  struct alimento{
       char  descricao[20];
       char  unidade[10];
       float energia;
       float sodio;
       int   quantidade;
  };
  
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#define N 3

typedef struct alimento ALIMENTO;

struct alimento{	
	char descricao[20];
	char unidade[10];
	float energia;
	float sodio;
	int quantidade;
};


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	ALIMENTO menu[N];
	int i;
	float porcSod;
	
	for(i=1; i<=N; i++){
		
		printf("Dados referentes ao alimento %d do cardápio: \n", i);
		
		fflush(stdin);
		
		printf("Digite o Alimento: ");
		gets(menu[i].descricao);// Serve para ler do teclado uma String.
		
		printf("Digite a Unidade: ");
		gets(menu[i].unidade);
		
		printf("Digite a quantidade de Energia (Kcal): ");
		scanf("%f", &menu[i].energia);
		
		printf("Digite a quantidade de Sódio (mg): ");
		scanf("%f", &menu[i].sodio);
		
		printf("Digite a Quantidade: ");
		scanf("%d", &menu[i].quantidade);
			
		system("cls"); // Serve para limpar a tela para a próxima apresentação.
	}
	
	for(i=1; i<=N; i++){
		
		porcSod = menu[i].quantidade * menu[i].sodio;
		
		printf("-------------------------------\n");
		printf("Porção: %d\n", menu[i].quantidade);
		printf("Quantidade de Sódio: %0.2f\n", porcSod);
		printf("-------------------------------\n");
	}
	
	return 0;
	
}
