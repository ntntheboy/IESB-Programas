#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int somaRecursiva(int n){

	if(n > 1){
		return n + somaRecursiva(n-1);
	}
  
	else{
		return 1;
	}
  
}

int main(){

	setlocale(LC_ALL, "Portuguese");
  
	int num;
  
	printf("Digite um número: ");
	scanf("%d", &num);
	
	printf("\n\nSoma = %d\n\n", somaRecursiva(num));
	
	getch();
  
}
