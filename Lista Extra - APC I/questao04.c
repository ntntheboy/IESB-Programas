#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    int qtde = 0, qneg = 0, num;

    do{
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num < 0){
            qtde++;
            qneg++;
        }
        else if(num > 0){
            qtde++;
        }

    }while(num != 0);

    printf("%d %d", qtde, qneg);

    return 0;
}
