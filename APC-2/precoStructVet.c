http://dontpad.com/2018-2/apc2/aula2

/*
Escrever um programa para alimentar um vetor de struct de produto 
conforme o seguinte:

nome do produto (caractere 20 posições)
preço do produto (flutuante)
quantidade no estoque (inteiro)

Seu programa DEVE CONTER:
	Uma função que receba o preço e a quantidade em estoque. A função deve calcular e 
	retornar o valor em moeda do estoque de cada produto que é dado pela fórmula: 
	valorEstoque = precoProdudo * quantidade

A saída do programa deve apresentar a listagem de cada produto com o valor em estoque 
calculado
*/





#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define N 2

typedef struct produ PROD;

struct produ{
	char nome[20];
	float pre;
	int qtd;	
};

float valor(float preco, int quantidade){
	return preco*quantidade;	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	PROD produto[N];
	int i, k; 
	float res[N];
	
	for(i=0; i<N; i++){
		
		
		printf("Digite preço do produto: ");
		scanf("%f", &produto[i].pre);
		fflush(stdin);
		printf("Digite o nome do produto: ");
		gets(produto[i].nome);
		printf("Digite a quantidade: ");
		scanf("%d", &produto[i].qtd);
		
		res[i] = valor(produto[i].pre, produto[i].qtd);
		system("cls");
		
	}
	
	for(k=0; k<N; k++){
		printf("Nome: %s\n", produto[k].nome);
		printf("Valor unitário: %0.2f\n", produto[k].pre);
		printf("Quantidade em estoque: %d\n", produto[k].qtd);
		printf("Valor: %0.2f\n", res[k]);		
	}
	
	return 0;
}
