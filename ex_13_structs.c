#include <stdio.h>
#include <stdlib.h>

struct Funcionario{
	int idade;
	float salario;
};

int main(int argc, char *argv[]){

	struct Funcionario suporte;

	suporte.idade = 21;
	suporte.salario = 800.00;

	printf("O funcionario tem a idade %i e salario %f\n", 
		    suporte.idade, 
		    suporte.salario);
	return 0;
}