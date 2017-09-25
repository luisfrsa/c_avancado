#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *arq;
    char url[] = "char.txt";
    int ra;
    arq = fopen(url, "a");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
    	printf("Digite o RA do aluno");
    	scanf("%d", &ra);
	    fprintf(arq, "Aluno de RA %d inserido!\n", ra);
    fclose(arq);
    return 0;
}
