#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, num, vogImpar=0, somA=0;
	char ch;
	
	for(i=0;i<5;i++){
		
		fflush(stdin);
		
		printf("Caractere e um Número: ");
		scanf("%c %d", &ch, &num);
		
		if(ch == 'a'){
			somA = somA + num;
			if((num%2) != 0){
				vogImpar++;
			}
		}
		
		if(ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){	
			if((num%2) != 0){
				vogImpar++;
			}
		}
	}
	
	printf("%d %d", somA, vogImpar);
	
	return 0;
}
