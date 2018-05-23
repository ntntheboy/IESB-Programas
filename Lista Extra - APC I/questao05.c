#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int qtd=0, qtdA=0;
	char ch;
	
	do{
		
		fflush(stdin); // fflush é uma função para limpar o buffer do teclado
		
		printf("Digite: ");
		scanf("%c", &ch);
		
		if(ch != '*'){	
		
			qtd++;
			
			if(ch == 'a'){
				qtdA++;
			}
		}
						
	}while(ch != '*');
	
	printf("Quantidade Sequência de Entrada = %d\n", qtd);
	printf("Quantidade de ocorrências da letra 'A' = %d\n", qtdA);
	
	return 0;
}
