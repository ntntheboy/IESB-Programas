#include <stdlib.h>
#include <stdio.h>
#define N 3                                            // Quantidade de membros da array
main(){
	float* vec = (float*)malloc(N*sizeof(float));      // Aloca a memoória necessária
	float j = 0;                                       // Declara a soma dos floats
	int i;                                             // Contador 
	for(i=0; i<N; i++){                                // Lê os floats
		scanf("%f",&vec[i]);                           
		j += vec[i];                                   // Soma os floats
	}
	system("cls");
	for(i=0; i<N; i++){                                // Exibe os floats
		printf("%.1f ",vec[i]);
	}
	printf("\n\nSoma dos floats: %.1f",j);             // Exibe a soma
	free(vec);                                         // Flusha a array
	getchar();
}
