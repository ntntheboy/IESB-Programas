#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, idade, peso;
	int pessoaMais = 0, pessoaMenos = 0;
	int pesoMais = 0, pesoMenos = 0;
	float mediaMenos, mediaMais, mediaTotal;
	
	for(i=0; i<5; i++){
		
		printf("Idade e Peso: ");
		scanf("%d %d", &idade, &peso);
		
		if(idade <= 30){
			pessoaMenos++;
			pesoMenos += peso;
		}
		else if(idade > 30){
			pessoaMais++;
			pesoMais += peso;
		}
		else{
			printf("Idade não pode ser negativa!\n");
			return 0;
		}
	
	}
	
	mediaMenos = (float) pesoMenos/pessoaMenos;
	mediaMais = (float) pesoMais/pessoaMais;
	mediaTotal = (float) (pesoMenos+pesoMais) / 5;
	
	printf("%0.2f %0.2f %0.2f", mediaMenos, mediaMais, mediaTotal);
	
	return 0;
}
