#include "fracao.h"

FRACAO criar(int num, int den){
	FRACAO f;
	f.numerador = num;
	f.denominador = den;
	return f;
}

char* mostrar(FRACAO f){
	char saida[30];
	sprintf(saida, "%d/%d", f.numerador, f.denominador);
	return saida;
}
