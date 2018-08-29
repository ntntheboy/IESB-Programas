Malloc

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	printf("Tamanho de um Inteiro: %d\n", sizeof(int));

	int* vetor = (int*) malloc(5*sizeof(int));

	if(vetor == NULL){
		printf("Memória Insuficiente!\n");
	}

	else{

		printf("20 Bytes de memória foram alocados para um ponteiro inteiro!\n");

		int k;

		for(k=0; k<5; k++){
            printf("Digite o valor da posição %d: ", k);
            scanf("%d", &vetor[k]);
		}

		system("cls");

		for(k=0;k<5;k++){
            printf("%d\n", vetor[k]);
		}

	}

	return 0;
}
