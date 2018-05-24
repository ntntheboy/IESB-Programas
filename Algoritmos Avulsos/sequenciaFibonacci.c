#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int fib(int x){
	
	if(x<2){
		return x;
	}
	else{
		return fib(x-1) + fib(x-2);
	}
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, n;
	
	printf("Digite a quantidade de números na sequência: ");
	scanf("%d", &n);
	
	system("cls"); // Serve para limpar a tela para a próxima apresentação.
	
	for(i=1; i<=n; i++){
		printf("%d\n", fib(i));
	}
	
	return 0;
	
}
