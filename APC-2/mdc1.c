// MÁXIMO DIVISOR COMUM

#include <stdlib.h>
#include <stdio.h>

                                              	    // Função de MDC
int mdc(int a, int b){
	int i,j,k=1;                                // i = Contador; j = Maior número entre "a" e "b"; k = Resultado
	if (a>b){j=a;}else{j=b;}                    // Define o maior número
	for(i=1;i<j;i++){                           // Repete a tentativa de divisão até "j".
		if((a%i==0)&&(b%i==0)){             // Caso seja um divisor comum, é válido para o MDC
			k*=i;                       // Ele é multiplicado pelo resultado
		}
	}
	return k;                                   // A função retorna o resultado
}

                                              	    // Função principal
main(){
	int a,b;                                    // Dois números em questão
	printf("Digite dois numeros (x y):");       // Diálogo simples
	scanf("%i %i",&a,&b);                       // Lê os números
	system("cls");                              // Limpa a tela
	printf("%i",mdc(a,b));                      // Printa o resultado usando a função
}
