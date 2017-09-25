#include <stdio.h>
#include <stdlib.h>

int qde_alunos=0;
int qde_livros=0;
int qde_cadastros=0;

/*nao terminado*/
typedef struct Livro{
	char titulo;
	char autor;
} Livro;
typedef struct Aluno{
	char nome;
	int ra;
} Aluno;
typedef struct Reserva{
	Livro livro;
	Aluno aluno;
} Reserva;

struct Aluno *alunos;
struct Livro *livros;
struct Reserva *reservas;


/*nao compila*/
void busca_aluno(int ra,Aluno *retorno){
	for(int i=0;i<sizeof(alunos)/sizeof(alunos[0]);i++){
		if(alunos[i].ra==ra){
			retorno = alunos[i];
			break;
		}
	}
}
void busca_livro(char nome,Livro *retorno){
	for(int i=0;i<sizeof(livro)/sizeof(livro[0]);i++){
		if(strncmp(livro[i].nome,nome)==0){
			retorno= livro[i];
			break;
		}
	}
}
void cadastrar_aluno(){
	alunos = (Aluno *)realloc(++qde_alunos,sizeof(Aluno));
	printf("Digite o RA do aluno\n");
	getchar();
	scanf("%d",alunos[qde_alunos].ra);
	printf("Digite o nome do aluno\n");
	getchar();
	scanf("%[^\n]",alunos[qde_alunos].nome);
}
void cadastrar_livro(){
	livros = (Livro *)realloc(++qde_livros,sizeof(Livro));
	printf("Digite o titulo do livro\n");
	getchar();
	scanf("%[^\n]",livros[qde_livros].titulo);
	printf("Digite o nome do autor\n");
	getchar();
	scanf("%[^\n]",livros[qde_livros].autor);
}

void cadastrar_reserva(){
	reservas = (Reserva *)realloc(++qde_reservas,sizeof(Reserva));
	printf("Digite o titulo do livro\n");
	getchar();
	scanf("%[^\n]",reservas[qde_reservas].titulo);
	printf("Digite o nome do autor\n");
	getchar();
	scanf("%[^\n]",reservas[qde_reservas].autor);
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
		getchar();
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