#include "fracao.h"
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FRACAO f1, f2;
	FRACAO soma, mult, divi, subt;
	
	f1 = criar(2,3);
	f2 = criar(4,5);
	
	soma = somar(f1,f2);
	subt = subtrair(f1,f2);
	mult = multiplicar(f1,f2);
	divi = dividir(f1,f2);
	
	printf("Fração f1 = %s\n", mostrar(f1));
	printf("Fração f1 = %s\n", mostrar(f2));
	
	printf("Fração Soma = %s\n", mostrar(soma));
	printf("Fração Subtração = %s\n", mostrar(subt));
	printf("Fração Multiplicação = %s\n", mostrar(mult));
	printf("Fração Divisão = %s\n", mostrar(divi));
	
	return 0;
}
