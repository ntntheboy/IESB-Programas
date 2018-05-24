#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um Número: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("O Número é PAR!");
	}
	else{
		printf("O Número é IMPAR!");
	}
	
	return 0;
}
