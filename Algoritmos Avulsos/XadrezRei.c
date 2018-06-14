#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define N 8

int main(){
	
	int lin, col;
	int tab[N][N];
	
	do{
	
		for(lin=0; lin<N; lin++){
			for(col=0; col<N; col++){
				tab[lin][col] = 0;
			}
		}
	
		printf("Digite a posição do rei (Linha e Coluna): ");
		scanf("%d %d", &lin, &col);
		
		if(lin>=0){
			
			system("cls");
			
			tab[lin][col] = 1;
			
			/*REGIÃO NORTE*/
			
				//Norte
				if(lin-1>0){
					tab[lin-1][col] = 2;
				}
				
				//Nordeste
				if(lin-1>0 && col+1<N){
					tab[lin-1][col+1] = 2;
				}
				
				//Noroeste
				if(lin-1>0 && col-1>0){
					tab[lin-1][col-1] = 2;
				}
				
			/*REGIÃO SUL*/
			
				//Sul
				if(lin+1<N){
					tab[lin+1][col] = 2;
				}
				
				//Sudeste
				if(lin+1<N && col+1<N){
					tab[lin+1][col+1] = 2;
				}
				
				//Sudoeste
				if(lin+1<N && col-1>0){
					tab[lin+1][col-1] = 2;
				}
				
			/*REGIÃO LESTE-OESTE*/
			
				//Leste
				if(col+1<N){
					tab[lin][col+1] = 2;
				}
				
				//Oeste
				if(col-1>0){
					tab[lin][col-1] = 2;
				}	
		}
		
		for(lin=0; lin<N; lin++){
			for(col=0; col<N; col++){
				if(tab[lin][col] == 2){
					printf("(%d , %d)\n", lin, col);
				}
			}
		}
	
	}while(lin>=0);
	
	return 0;
}
