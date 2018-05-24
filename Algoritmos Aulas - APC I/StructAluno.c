#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

typedef struct ficha ALUNO;

struct ficha{
	char nome[30];
	int idade;
	float mensalidade;
};


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	ALUNO alu;
	
	fflush(stdin);
	
	printf("Digite o nome do aluno: ");
	gets(alu.nome); // é um GET para pegar do teclado uma String.
	
	printf("Digite a idade do aluno: ");
	scanf("%d", &alu.idade);
	
	printf("Digite a mensalidade do aluno: ");
	scanf("%f", &alu.mensalidade);
	
	printf("Nome: %s\n", alu.nome);
	printf("Idade: %d\n", alu.idade);
	printf("Mensalidade: %0.2f\n", alu.mensalidade);
	
	return 0;
	
}
