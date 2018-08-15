http://dontpad.com/2018-2/apc2/aula4

/*
Exercício 2
Escreva uma função recursiva que calcule a soma dos primeiros n cubos: S(n) = 1³ + 2³ + ... + n³ .
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int cubos(int a){
	if(a>1){
		return pow(a,3) + cubos(a-1);
	}
	return 1;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Digite o número para ser somado ao cubo: ");
	scanf("%d", &x);
	
	system("cls");
	
	printf("Soma do Cubo: %d", cubos(x));
	
	return 0;
}
