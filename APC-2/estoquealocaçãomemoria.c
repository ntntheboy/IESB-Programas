/*Criar um struct contendo as informações de produtos (nome, quantidade, preço)
Alimentar um vetor de produtos com alocação dinâmica de memória, imprimir os
produtos e liberar a memória*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define N 3

int main(){

	setlocale(LC_ALL, "Portuguese");

    typedef struct produto PRODUTO;

    struct produto{
        char nome[20];
        int qtde;
        float preco;
    };

    PRODUTO* estoque = malloc(N*sizeof(PRODUTO));

    if(estoque == NULL){
        printf("Memória Insuficiente!\n");
    }
    
    else{
        int i;

        for(i=0; i<N; i++){

            fflush(stdin);

            printf("Digite o nome do produto %d: ", i);
            gets(estoque[i].nome);

            printf("Digite a quantidade do produto %d: ", i);
            scanf("%d", &estoque[i].qtde);

            printf("Digite o valor do produto %d: ", i);
            scanf("%f", &estoque[i].preco);
            system("cls");
        }

        for(i=0; i<N; i++){
            printf("------------------------------------\n");
            printf("Produto: %s\n", estoque[i].nome);
            printf("Quantidade: %d\n", estoque[i].qtde);
            printf("Preço: %0.2f\n", estoque[i].preco);
            printf("------------------------------------\n");
        }
    }
    
    free(estoque); //Libera a memória/desaloca do estoque
    
    return 0;
}
