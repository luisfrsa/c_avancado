#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *arq;
    char url[] = "a.txt", ch;
    int num;
    arq = fopen(url, "r");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
    	while((fscanf(arq,"%c %d\n", &ch, &num))!=EOF)
            printf("%c %d\n", ch, num);
    fclose(arq);
    return 0;
}
