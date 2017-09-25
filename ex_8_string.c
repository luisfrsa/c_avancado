#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	char minicurso[20] = "C Avancado";
	for (int i=0;i<20;i++){
		printf("%c.",minicurso[i]);
	}
	int pos;
	while (minicurso[pos]!='\0')
		pos++;
	printf("\nO caractere \\n esta na posicao %d\n",pos );
	return 0;
}