#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, num, somVog=0, somRes=0, somTot=0;
	char ch;
	
	for(i=0;i<5;i++){
		
		fflush(stdin);
		
		printf("Caractere e um Número: ");
		scanf("%c %d", &ch, &num);
		
		somTot = somTot + num;
		
		if(ch == 'a' || ch == 'e' ||  ch == 'i' || ch == 'o'|| ch == 'u'){
			somVog = somVog + num;
		}
		else{
			somRes = somRes + num;
		}
		
	}
	
	printf("%d %d %d", somVog, somRes, somTot);
	
	return 0;
}
