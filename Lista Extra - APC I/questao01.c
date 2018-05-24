#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    int num;
    int qtd = 0;
    int max = 0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num != 0){
            qtd++;
            if(num > max){
                max = num;
            }
        }
    }while(num != 0);
    printf("%d %d\n", qtd, max);
    return 0;
}
