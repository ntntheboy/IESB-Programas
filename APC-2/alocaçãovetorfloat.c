/*Criar e alimentar um vetor de valores flutuantes com alocação dinâmica de memória.
Imprimir os valores armazenados e liberar a memória
Imprimir a soma dos valores armazenados.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define N 3

int main(){

	setlocale(LC_ALL, "Portuguese");

    float* vetor = (float*) malloc(N*sizeof(float));

    if(vetor == NULL){
        printf("Memória Insuficiente!");
    }
    
    else{
    
        int i;

        for(i=0; i<N; i++){
            printf("Digite um valor float (%d): ", i);
            scanf("%f", &vetor[i]);
        }

        system("cls");

        for(i=0; i<N; i++){
            printf("Float(%d) = %0.2f\n", i, vetor[i]);
        }
        
        printf("Soma dos Vetores = %0.2f\n", vetor[0]+vetor[1]+vetor[2]);
    }

    return 0;
}
