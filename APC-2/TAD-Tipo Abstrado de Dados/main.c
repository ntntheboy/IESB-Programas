#include "fracao.h"
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	FRACAO f1;
	
	f1 = criar(2,3);
	
	printf("Fração f1 = %s\n", mostrar(f1));
	
	return 0;
}
