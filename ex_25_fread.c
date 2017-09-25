
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char url[]="a.txt", buffer[10];
    FILE *arq;
    
    arq = fopen(url, "r");
    if(arq == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");
    else
    while( !feof(arq) ){
            fread(buffer, 5, 1, arq);
        printf("%s\n", buffer);
        }
    fclose(arq);
    return 0;
}