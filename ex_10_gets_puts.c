#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	char nome[50];
	int idade;

	printf("Digite sua idade \n");
	scanf("%d",&idade);

	//fflush(stdin);//para windows  ou _fpurge p/ linux
	 __fpurge(stdin);

	printf("Digite seu nome completo \n");
	gets(nome);
	printf("Seu nome completo e sua idade: %d ; ",idade);
	puts(nome);

	return 0;
}