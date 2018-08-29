Malloc = Memory Allocation

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int* vetor = (int*) malloc(20); //Malloc alocação de bytes na memória, nesse caso, 20bytes

	if(vetor == NULL){
		printf("Memória Insuficiente!\n");
	}
	else{
		printf("20 Bytes de memória foram alocados para um ponteiro inteiro!\n");
	}
	return 0;
}
