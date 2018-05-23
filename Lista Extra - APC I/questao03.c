#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    int idade, peso;
    int pessoaMais = 0, pessoaMenos = 0;
    int pesoMais = 0, pesoMenos = 0;
    float mediaMenos, mediaMais, mediaTotal;

    for(int i = 0; i < 5; i++){

        printf("Digite a idade e o peso: ");
        scanf("%d %d", &idade, &peso);

        if(idade <= 30){
            pessoaMenos++;
            pesoMenos = pesoMenos + peso;
        }
        else if(idade > 30){
            pessoaMais++;
            pesoMais = pesoMais + peso;
        }
        else{
            printf("Idade nao pode ser negativa!\n");
            return 0;
        }
    }

    mediaMenos = pesoMenos/pessoaMenos;
    mediaMais = pesoMais/pessoaMais;
    mediaTotal = (pesoMenos+pesoMais) / (5);

    printf("%0.2f %0.2f %0.2f", mediaMenos, mediaMais, mediaTotal);

    return 0;
}
