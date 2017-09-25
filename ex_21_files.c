#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	char url[] = "char.txt";
	char ch;
	FILE *arq;
	printf("Digite o Char: ");
	ch = getchar();

	arq = fopen(url,"w+");
	if(arq==NULL){
		printf("Erro ao fopen arquivo");
 	}else{
 		fputc(ch,arq);
 		fclose(arq);
	}	
 	return 0;
 }
