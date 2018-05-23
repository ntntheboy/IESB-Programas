#include <stdio.h>
#include <stdlib.h>

int main(){

    int sexo, nota; // SEXO (1-MAS) (2-FEM)
    int notaH = 0, notaM = 0; // NOTA INTEIRA 0 A 100
    float mediaH, mediaM, mediaT;
    int contM = 0, contH = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o Sexo e a Nota: ");
        scanf("%d %d", &sexo, &nota);

        if( (nota >= 0 && nota <= 100)){

            if(sexo == 1 && (nota >= 0 && nota <= 100) ){
                contH++;
                notaH = notaH + nota;
            }
            else if(sexo == 2 && (nota >= 0 && nota <= 100) ){
                contM++;
                notaM = notaM + nota;
            }

        }
        else{
            printf("Dados Inválidos!\n");
            return 0;
        }
    }

    mediaH = notaH / contH;
    mediaM = notaM / contM;
    mediaT = (notaH+notaM) / 5;
    printf("%0.2f, %0.2f, %0.2f", mediaH, mediaM, mediaT);

    return 0;
}
