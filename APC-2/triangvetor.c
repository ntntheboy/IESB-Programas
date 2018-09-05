#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

void ordena(float* vetor, int tam){
	int k, m;
	float aux;
	for(k=0; k<tam-1; k++){
		for(m=k+1; m<tam; m++){
			if(vetor[k] < vetor[m]){
				aux = vetor[k];
				vetor[k] = vetor[m];
				vetor[m] = aux;
			}
		}
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	float vet[3];
	float A, B, C;	
	scanf("%f %f %f", &vet[0], &vet[1], &vet[2]);
	
	ordena(vet, 3);

	A = vet[0];
	B = vet[1];
	C = vet[2];
	
	if(A >= B + C){
		printf("NÃO FORMA TRIÂNGULO\n");
	}
	else{
		if(pow(A,2) == pow(B,2) + pow(C,2)){
			printf("TRIÂNGULO RETÂNGULO\n");
		}
		if(pow(A,2) > pow(B,2) + pow(C,2)){
			printf("TRIÂNGULO OBTUSÂNGULO\n");
		}
		if(pow(A,2) < pow(B,2) + pow(C,2)){
			printf("TRIÂNGULO ACUTÂNGULO\n");
		}
		if(A==B && B==C){
			printf("TRIÂNGULO EQUILÁTERO\n");
		}
		else if( ! (A!=B && B!=C && A!=C) ){
			printf("TRIÂNGULO ISÓSCELES\n");
		}
	}

	//getch();
}
