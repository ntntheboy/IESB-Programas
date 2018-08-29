#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define N 3

int main(){

	setlocale(LC_ALL, "Portuguese");

    int** matriz = (int**) malloc(N * sizeof(int*)); //Alocação dinâmica com uma matriz
    int lin, col;

    if(matriz == NULL){
        printf("Memória não Alocada!\n");
    }

    else{

        for(lin=0; lin<N; lin++){
            matriz[lin] = (int*) malloc(N*sizeof(int));

            for(col=0; col<N; col++){
                printf("Digite o valor da posição (%d, %d): ", lin, col);
                scanf("%d", &matriz[lin][col]);
            }
        }

        system("cls");

        for(lin=0; lin<N; lin++){
            for(col=0; col<N; col++){
                printf("%3d", matriz[lin][col]);
            }
            printf("\n");
        }

    }

    free(matriz);
    return 0;
}
