#include <stdio.h>
#include <stdlib.h>

struct Aluno{
	int ra;
	float nota1,nota2,media;
};

int main(int argc, char *argv[]){

	struct Aluno *aluno;
	int qtd_alunos;

	printf("Quantos alunos quer cadatrar?");
	scanf("%d",&qtd_alunos);
	aluno = (struct Aluno *)malloc(qtd_alunos*sizeof(struct Aluno));

	/*igual o anterior*/
	for(int i=1;i<=qtd_alunos;i++){
		printf("\nAluno [%d]: ",i);
		printf("\nDigite o RA do aluno[%d]: ",i);
		scanf("%d",&aluno[i].ra);
		getchar();
		printf("\nDigite a nota 1 do aluno[%d]: ",i);
		scanf("%f",&aluno[i].nota1);
		getchar();
		printf("\nDigite a nota 2 do aluno[%d]: ",i);
		scanf("%f",&aluno[i].nota2);
		getchar();
		printf("\n a Media do aluno[%d] e %.2f\n",i,((aluno[i].nota1+aluno[i].nota2)/2));
	}

	return 0;
}