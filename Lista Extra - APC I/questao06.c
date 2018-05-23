#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    int sexo, nota;
    int qtH = 0, qtM = 0, ntH = 0, ntM = 0;
    float medH, medM, medT;

    for(int i = 0; i < 5; i++){
        printf("Digite o sexo e a nota: ");
        scanf("%d %d", &sexo, &nota);

            if(sexo == 1){
                qtH++;
                ntH = ntH + nota;
            }
            else if(sexo == 2){
                qtM++;
                ntM = ntM + nota;
            }
        }

        medH = ntH / qtH;
        medM = ntM / qtM;
        medT = (ntH+ntM) / 5;

        printf("%0.2f %0.2f %0.2f ", medH,medM,medT);
        return 0;
    }
