#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define N 8
main(){
	//ajustar o idioma
	setlocale(LC_ALL, "Portuguese");
	
	//declarações
	int tabuleiro[N][N];
	int linTorre, colTorre, lin, col;
	
	do{
		system("cls");
		//inicializando o tabuleiro
		for(lin=0; lin<N; lin++){
			for(col=0; col<N; col++){
				tabuleiro[lin][col] = 0;
			}
		}
		
		printf("Digite a linha da Torre: ");
		scanf("%d", &linTorre);
		if(linTorre >= 0){
			printf("Digite a coluna da Torre: ");
			scanf("%d", &colTorre);
			
			tabuleiro[linTorre][colTorre] = 2;
			
			//descobrindo posições ao norte
			for(lin=0; lin<linTorre; lin++){
				tabuleiro[lin][colTorre] = 1;
			}
			
			//descobrindo posições ao sul
			for(lin=linTorre+1; lin<N; lin++){
				tabuleiro[lin][colTorre] = 1;
			}
			
			//descobrindo posições a oeste
			for(col=0; col<colTorre; col++){
				tabuleiro[linTorre][col] = 1;
			}
			
			//descobrindo posições a leste
			for(col=colTorre+1; col<N; col++){
				tabuleiro[linTorre][col] = 1;
			}
			
			for(lin=0; lin<N; lin++){
				for(col=0; col<N; col++){
					if(tabuleiro[lin][col] == 1){
						printf("(%d, %d)", lin, col);
					}
				}
			}
			printf("\n\npressione uma tecla para continuar! \n\n");
			getch();
		}
		
	}while(linTorre>=0);
	
	getch();
}
