#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int pot(int x, int y){
	
	return pow(x,y);

}


int main(){
	
	int num = 2;
	int nux = 3;
	
	printf("Valor = %d", pot(num, nux));
	
	return 0;
}

