#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, num, qtdAP=0, somVog=0;
	char ch;
	
	for(i=0;i<5;i++){
		
		fflush(stdin);
		
		printf("Caractere e um Número: ");
		scanf("%c %d", &ch, &num);
		
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
			somVog = somVog + num;
		}
		
		if(ch == 'a'){
			if(num % 2 == 0){
				qtdAP++;
			}
		}
	}
	
	printf("%d %d", somVog, qtdAP);
	
	return 0;
}
