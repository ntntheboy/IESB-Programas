#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#define N 3                                                   // Quantidade de membros da array

typedef struct _prod{
		char name[30];                                // Nome
		int amount;                                   // Quantidade
		float price;                                  // Preço
	}prod;

main(){
	prod* list = (prod*) malloc(N*sizeof(prod));         // Alocar memória necessária
	if(list==NULL) return 0;                             // Se não houver a memória suficiente, o programa é encerrado
	setlocale(LC_ALL,"Portuguese");
	int i;                                               // Contador
	for(i=0;i<N;i++){                                    // Lê as variáveis para o membro "i"
		printf("Nome: ");
		scanf("%s",&list[i].name); 
		printf("Quantidade: ");
		scanf("%i",&list[i].amount);
		printf("Preço: R$");
		scanf("%f",&list[i].price);
		system("cls");
	}
	for(i=0;i<N;i++){                                    // Lista as variáveis
		printf("Nome: %s\n",list[i].name);             
		printf("Quantidade: %i\n",list[i].amount);
		printf("Preço: R$%.2f\n",list[i].price);
		printf("Valor de estoque: R$%.2f\n\n", list[i].price * list[i].amount); // Valor
	}
	free(list);                                          // Flusha os dados
	getchar();
}
