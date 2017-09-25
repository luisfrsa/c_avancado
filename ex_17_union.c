#include <stdio.h>
#include <stdlib.h>

typedef struct Dados_struct {
    int i;
    float f;
    char str[20];
} DadosS;

typedef union Dados_union {
    int i;
    float f;
    char str[20];
} DadosU;

int main(int argc, char *argv[]){
   
    printf("Tamanho de memoria ocupado pela struct : %d\n", sizeof(DadosS));
    printf("Tamanho de memoria ocupado pela union  : %d\n", sizeof(DadosU));

    return 0;
}