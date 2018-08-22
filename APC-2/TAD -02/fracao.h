/*fracao.h*/
#include <stdlib.h>
#include <stdio.h>

typedef struct fracao FRACAO;
struct fracao{
	int numerador;
	int denominador;
};

FRACAO criar(int num, int den);
char* mostrar(FRACAO f);
FRACAO somar(FRACAO f1, FRACAO f2);
FRACAO subtrair(FRACAO f1, FRACAO f2);
FRACAO multiplicar(FRACAO f1, FRACAO f2);
FRACAO dividir(FRACAO f1, FRACAO f2);
