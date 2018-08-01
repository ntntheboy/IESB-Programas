http://dontpad.com/2018-2/apc2/aula2

/*
Escrever um programa para modelar a ficha de funcionários
da empresa FACA-ME RIR Comércio e Representações.
A ficha do funcionário é descrita conforme o seguinte:
	int matricula																	
	char nome[30]
	int dependentes
	float salario
Monte um vetor com 5 fichas de funcionário e imprima o custo
mensal com o pagamento destes funcionários.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define N 3

typedef struct funci FUN;

struct funci{
	int matri;
	char nome[30];
	int depend;
	float sal;	
};

void linha(){
	printf("------------------------------\n");
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	FUN funcionario[N];
	int i, k;
	float custoMensal;
	
	for(i=0; i<N; i++){
	
		fflush(stdin);
		printf("Nome: ");
		gets(funcionario[i].nome);
		printf("Matricula: ");
		scanf("%d", &funcionario[i].matri);
		printf("Quantidade de Filhos: ");
		scanf("%d", &funcionario[i].depend);
		printf("Salário: ");
		scanf("%f", &funcionario[i].sal);
		
		custoMensal = custoMensal + funcionario[i].sal;			
		
		system("cls");
	}
	
	for(k=0; k<N; k++){
		
		linha();
		printf("Nome: %s\n",funcionario[k].nome );
		printf("Matrícula: %d\n",funcionario[k].matri);
		printf("Filhos: %d\n",funcionario[k].depend);
		printf("Salário: %0.2f\n",funcionario[k].sal);
		linha();
	}
	
	printf("Custo Mensal: %0.2f", custoMensal);
	
	return 0;
}
