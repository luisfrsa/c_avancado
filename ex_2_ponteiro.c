#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int numero;
	int *ptr_num = &numero;//aponta para endereco de memoria

	printf("Endereco da variavel numero e %ld\n",&numero);
	printf("O endereco armazenado em ptr_num %ld\n",ptr_num);

	ptr_num = NULL;
	printf("Setando ptr_num = NULL \n");
	printf("Endereco da variavel numero e %ld\n",&numero);
	printf("O endereco armazenado em ptr_num %ld\n",ptr_num);
}	