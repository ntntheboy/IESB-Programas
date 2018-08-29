/*Altere o programa do produto para que imprima o valor do estoque de cada produto
(quantidade * preço do produto)
Liberar memória ao final do programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define N 3

float valest(int x, float y){
    return x*y;
}

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
            printf("Valor (Estoque x Preço): %0.2f\n", valest(estoque[i].qtde, estoque[i].preco));
            printf("------------------------------------\n");
        }
    }

    free(estoque); //Libera a memória/desaloca do estoque

    return 0;
}
