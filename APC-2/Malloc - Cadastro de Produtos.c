#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#define N 3                                            // Quantidade de membros da array

typedef struct _prod{
		char name[30];                                 // Nome
		int amount;                                    // Quantidade
		float price;                                   // Pre�o
	}prod;

main(){
	prod* list = (prod*) malloc(N*sizeof(prod));       // Alocar mem�ria necess�ria
	if(list==NULL) return;                             // Se n�o houver a mem�ria suficiente, o programa � encerrado
	setlocale(LC_ALL,"Portuguese");
	int i;                                             // Contador
	for(i=0;i<N;i++){                                  // L� as vari�veis para o membro "i"
		printf("Nome: ");
		scanf("%s",&list[i].name); 
		printf("Quantidade: ");
		scanf("%i",&list[i].amount);
		printf("Pre�o: R$");
		scanf("%f",&list[i].price);
		system("cls");
	}
	for(i=0;i<N;i++){                                   // Lista as vari�veis
		printf("Nome: %s\n",list[i].name);             
		printf("Quantidade: %i\n",list[i].amount);
		printf("Pre�o: R$%.2f\n\n",list[i].price);
	}
	getchar();
}
