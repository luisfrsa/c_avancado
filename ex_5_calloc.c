#include <stdio.h>
#include <stdlib.h>
/*
CALLOC aloca e zera valores da memoria?
*/
int main(int argc, char *argv[]){

    float **numeros;
    int l = 3, c = 4;

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

    return 0;
}