#include <stdio.h>
#include <stdlib.h>
#define e 3                                              // Quantidade de olhos do corvo
#define caw 10                                           // Máximo de "caw caw"s em uma frase

rpow(int base, int exp){                                 // Função semelhante à pow() de "math.h".
                                                         // Por algum motivo, elevar a 0 usando pow()
                                                         // resultava em 0, portanto, recriei a função.
	int i, j = 1;
	for(i=0; i<exp; i++){
		j *= base;
	}
	return j;
}

eyesNum(char* eyes){                                     // Converte olhos para binário e depois para decimal.
	int i, j = 0;
	for(i=0;i<e;i++){
		if(eyes[i] == '*'){
			j += rpow(2, (e-1)-i);
		}
	}
	return j;
}

translate(char* text){                                   // Identifica os olhos, os gritos, e decifra o número.
	int i = 0, j = 0, k = 0, l = 0;
	int m[caw];
	while(text[i] != '\0'){
		if(text[i] == '*' || text[i] == '-'){
			char eyes[e];
			int h;
			for(h=0;h<e;h++){
				eyes[h] = text[i+h];
			}
			j += eyesNum(eyes);
			i += e;
		}else if(text[i] == 'c' || text[i] == 'C'){
			m[l] = j;
			l++;
			j = 0;
			i += 7;
		}else{
			i++;
		}
	}
	int n;
	for(n=0;n<l;n++){
		k += m[n] * rpow(10,(l-1)-n);
	}
	return k;
}

main(){
	char text[90];
	gets(text);			                                         // Lê a mensagem.
	system("cls");
	printf("%i",translate(text));                            // Traduz a mensagem.
	getchar();
}
