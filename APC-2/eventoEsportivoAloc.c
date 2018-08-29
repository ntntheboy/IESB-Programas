/*Criar um struct para armazenar as informações de um evento esportivo conforme o
seguinte
	evento
	valor do ingresso
	assento
Seu programa deve imprimir o valor total arrecadado com o evento.
Liberar memória ao final do programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define N 3

int main(){

	setlocale(LC_ALL, "Portuguese");

    typedef struct event EVENT;

    struct event{
        char evento[20];
        char assento[20];
        float valor;
        };

    EVENT* eventoEsp = malloc(N*sizeof(EVENT));

    if(eventoEsp == NULL){
        printf("Memória Insuficiente!\n");
    }

    else{
    
        int i;

        for(i=0; i<N; i++){

            fflush(stdin);

            printf("Digite o nome do evento %d: ", i);
            gets(eventoEsp[i].evento);

            printf("Digite o assento %d: ", i);
            gets(eventoEsp[i].assento);

            printf("Digite o valor do evento %d: ", i);
            scanf("%f", &eventoEsp[i].valor);
            
            system("cls");
            
        }

        for(i=0; i<N; i++){
            printf("------------------------------------\n");
            printf("Evento: %s\n", eventoEsp[i].evento);
            printf("Assento: %s\n", eventoEsp[i].assento);
            printf("Valor: %0.2f\n", eventoEsp[i].valor);
            printf("------------------------------------\n");
        }
        
        printf("O valor total arrecadado foi de: R$ %0.2f", eventoEsp[0].valor+eventoEsp[1].valor+eventoEsp[2].valor);
        
    }

    free(eventoEsp); //Libera a memória/desaloca do estoque

    return 0;
}
