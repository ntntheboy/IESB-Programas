/*
Adaptar o programa do vetor de alunos visto na aula 12. Acrescente no struct o campo nota do tipo real. 
Seu programa deve realizar um processamento para calcular a média da turma.
*/

/*
Serve para pegar o nome de um aluno e sua média final. Isso será repetido cinco vezes.
*\

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#define N 5

typedef struct ficha ALUNO;

struct ficha{
	char nome[30];
	float nota;
};

int main () {

	setlocale(LC_ALL, "Portuguese");
	
	ALUNO turma[N];
	int k, res=0;
	float media;
	
	for(k=0; k<N; k++){
		printf("Dados do aluno da posição %d da turma\n\n", k);
		
		fflush(stdin);
    
		printf("Digite o nome do aluno: ");
		gets(turma[k].nome);
		
		printf("Didigite a nota do aluno: ");
		scanf("%f", &turma[k].nota);
		
		res = res+turma[k].nota;
		
		system("cls"); // Serve para limpar a tela para a próxima apresentação.
    
	}
	
	for(k=0; k<N; k++){
		printf("-----------------------------\n");
		printf("Nome: %s\n", turma[k].nome);
		printf("Nota: %0.2f\n", (float)turma[k].nota);
		printf("-----------------------------\n");
	}
	
	media = (float)res/N;
	printf("Média da nota dos alunos: %0.2f", media);
	
	return 0;
}
