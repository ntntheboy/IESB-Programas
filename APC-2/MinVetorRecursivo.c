http://dontpad.com/2018-2/apc2/aula4


/*FUNÇÃO RECURSIVA PARA DESCOBRIR O MENOR VALOR DO VETOR*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int minimo(int* vetor, int tam, int pos, int min){
	
	if(pos < tam){
		
		if(vetor[pos] < min){
			
			min = vetor[pos];
		}
		
		return minimo(vetor, tam, pos+1, min);
	}
	
	return min;
}


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int vet[] = { 37, 41, 21, 5, 33, 89, 17, -7, 29, 12, 22 };
	
	printf("Mínimo = %d", minimo(vet, 11, 0, vet[0]));
	
	return 0;
}
