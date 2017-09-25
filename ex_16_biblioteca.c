#include <stdio.h>
#include <stdlib.h>

int qde_alunos=0;
int qde_livros=0;
int qde_cadastros=0;


typedef struct Livro{
	char titulo;
	char autor;
} Livro;
typedef struct Aluno{
	char nome;
	char ra;
} Aluno;
typedef struct Reserva{
	Livro livro;
	Aluno aluno;
} Reserva;

struct Aluno *alunos;
struct Livro *livros;
struct Reserva *reservas;



void cadastrar_livro(){
	livros = (Livro *)malloc(++qde_livros*sizeof(Livro));
	printf("Digite o titulo do livro");
	scanf("%[^\n]",livros[qde_livros].titulo);
	getchar();
	printf("Digite o nome do autor");
	scanf("%[^\n]",livros[qde_livros].autor);
	getchar();
}
void cadastrar_pessoa(){}
void cadastrar_reserva(){}
void imprimir_livros(){}
void imprimir_pessoas(){}
void imprimir_reservas(){}


void menu(){
	int sair=1;
	while(sair!=0){
		printf("O que voce deseja fazer?\n");
		printf("1 - Cadastrar livro.\n");
		printf("2 - Cadastrar pessoa.\n");
		printf("3 - Cadastrar reserva.\n");
		printf("4 - Imprimir livros.\n");
		printf("5 - Imprimir pessoas.\n");
		printf("6 - Imprimir reservas.\n");
		printf("0 - Finalizar.\n");
		scanf("%d",&sair);
		switch(sair){
			case 1: cadastrar_livro(); break;
			case 2: cadastrar_pessoa(); break;
			case 3: cadastrar_reserva(); break;
			case 4: imprimir_livros(); break;
			case 5: imprimir_pessoas(); break;
			case 6: imprimir_reservas(); break;
			default:
			break;

		}
	}
}


int main(int argc, char *argv[]){
	menu();
	return 0;
}	