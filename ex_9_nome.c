#include <stdio.h>
#include <stdlib.h>

/*nao funciona com espaco*/
int main(int argc, char *argv[]){
	char nome[50];
	printf("Digite seu primeiro nome \n");
	scanf("%s",nome);
	printf("Seu primeiro nome e: %s \n",nome);

	printf("Digite seu nome completo \n");
	scanf("%s",nome);
	printf("Seu nome completo e: %s \n",nome);


	return 0;
}