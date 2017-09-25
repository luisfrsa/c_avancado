#include <stdio.h>
#include <stdlib.h>
/*
CALLOC aloca e zera valores da memoria?
*/
int main(int argc, char *argv[]){

    float **numeros;
    int l = 1, c = 1;

    numeros = (float **)calloc(l, sizeof(float *));
    /*necessario alocar cada array dentro do array para gerar matriz²*/
    for(int i = 0; i < l; i++){
        numeros[i] = (float *)calloc(c, sizeof(float));
    }

    printf("\n\tMatriz alocada\n");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("numeros[%d][%d] : %.2f\n", i, j, numeros[i][j]);
        }
    }

     /*considere a alocação de numeros utilizando malloc como anteriormente

    Realocando para uma matriz com o dobro de linhas e colunas*/
/*l = 2, c = 2;*/
    numeros = (float **)realloc(numeros, 2*l*sizeof(float *));
    for(int i = 0; i < 2*l; i++)
        numeros[i] = (float *)realloc(numeros[i], 2*c*sizeof(float));
    for(int i = 0; i < l+l; i++)
        for(int j = 0; j < c+c; j++){
            printf("Digite o numero para a posicao [%d][%d] : ", i, j);
            scanf("%f", &numeros[i][j]);
        }
    printf("\n\tMatriz após realloc\n");
    for(int i = 0; i < l+l; i++)
        for(int j = 0; j < c+c; j++){
            printf("numeros[%d][%d] : %.2f\n", i, j, numeros[i][j]);
        }
    return 0;
}