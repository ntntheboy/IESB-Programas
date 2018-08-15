http://www.dontpad.com/2018-2/apc2/aula4/

/*
Exercício 1
Escrever um programa em linguagem C que receba dois números
inteiros. Seu programa deve conter uma função para calcular 
o mdc entre os números recebidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int mdc(int a, int b){
	if(b > 0){
		return mdc(b, a%b);
	}
	return a;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x, y;
	
	printf("Digite 2 números para o MDC: ");
	scanf("%d %d", &x, &y);
	
	system("cls");
	
	printf("O MDC entre %d e %d é: %d\n", x, y, mdc(x,y));
	
	return 0;
}
