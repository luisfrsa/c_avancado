#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	char nome[50];
	printf("Digite seu nome completo \n");
	scanf("%[^\n]",nome);
	printf("Seu nome completo e: %s \n",nome);

	return 0;
}