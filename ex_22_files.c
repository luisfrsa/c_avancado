#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *arq;
    char url[] = "char.txt";
    char str[] = "asdsaddsasdasadC avancado eh demais!";
    arq = fopen(url, "w");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
       fwrite(str , 1 , sizeof(str) , arq);
    fclose(arq);
    return 0;
}
