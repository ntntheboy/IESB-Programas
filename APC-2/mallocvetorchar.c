#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	printf("Tamanho de um Char: %d\n", sizeof(char));

	char* vetor = (char*) malloc(5*sizeof(char));

	if(vetor == NULL){
		printf("Memória Insuficiente!\n");
	}

	else{

		printf("1 Byte de memória foi alocado para um ponteiro char!\n");

		int k;

		for(k=0; k<5; k++){
            printf("Digite o valor da posição %d: ", k);
            scanf("%s", &vetor[k]);
		}

		system("cls");

		for(k=0;k<5;k++){
            printf("%c\n", vetor[k]);
		}

	}

	return 0;
}
