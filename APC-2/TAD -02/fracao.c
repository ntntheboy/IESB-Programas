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

FRACAO somar(FRACAO f1, FRACAO f2){
	FRACAO resultado;
	resultado.numerador = (f1.numerador*f2.denominador) + (f2.numerador*f1.denominador);
	resultado.denominador = f1.denominador*f2.denominador;
	return resultado;
}

FRACAO multiplicar(FRACAO f1, FRACAO f2){
	FRACAO resultado;
	resultado.numerador = f1.numerador * f2.numerador;
	resultado.denominador = f1.denominador*f2.denominador;
	return resultado;
}

FRACAO dividir(FRACAO f1, FRACAO f2){
	FRACAO resultado;
	resultado.numerador = f1.numerador*f2.denominador;
	resultado.denominador = f2.denominador*f2.numerador;
	return resultado;
}

FRACAO subtrair(FRACAO f1, FRACAO f2){
	FRACAO resultado;
	resultado.numerador = (f1.numerador*f2.denominador) - (f2.numerador*f1.denominador);
	resultado.denominador = f1.denominador*f2.denominador;
	return resultado;
}
