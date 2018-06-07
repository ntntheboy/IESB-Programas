#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define N 8

int main(){
	setlocale(LC_ALL, "Portuguese");
  
	int tabuleiro[N][N];
	int lin, col;
	
	do{
		system("cls");
    
		//inicializando o tabuleiro
		for(lin=0; lin<N; lin++){
    
			for(col=0; col<N; col++){
				tabuleiro[lin][col] = 0;
			}
      
		}
		
		printf("Digite a posição do Rei: ");
		scanf("%d %d", &lin, &col);
    
		if(lin>=0){
			tabuleiro[lin][col] = 2;  //posicionando o rei
			
			//posições ao norte (noroeste, norte, nordeste)
      
			if( lin-1>0 && col-1>0 ) {//noroeste
				tabuleiro[lin-1][col-1] = 1;
			}
      
			if( lin-1>0 ) { //norte
				tabuleiro[lin-1][col] = 1;
			}
      
			if( lin-1>0 && col+1<N ){	//posição nordeste
				tabuleiro[lin-1][col+1] = 1;
			}
			
			//posições oeste leste
      
			if(col-1>0){		//posição oeste
				tabuleiro[lin][col-1] = 1;
			}
			
			if(col+1<N){
				tabuleiro[lin][col+1] = 1;
			}
			
			//posições ao sul (sudoeste, sul, sudeste)
      
			if(lin+1<N && col-1>0){		//posição sudoeste
				tabuleiro[lin+1][col-1] = 1;
			}
			
			if(lin+1<N){				//posição sul
				tabuleiro[lin+1][col] = 1;
			}
			
			if(lin+1<N && col+1<N){//posição sudeste
				tabuleiro[lin+1][col+1] = 1;
			}
			
			//imprimindo as posições de jogada do Rei
      
			for(lin=0; lin<N; lin++){
				for(col=0; col<N; col++){
					if(tabuleiro[lin][col]==1){
						printf("(%d, %d) ", lin, col);
					}
				}
			}
			getch();
		}
	}while(lin>=0);
}
