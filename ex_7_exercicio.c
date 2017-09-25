#include <stdio.h>
#include <stdlib.h>

/*
alocar 3 matrizes 2x2
a,b c/ malloc
c c/ calloc
dobrar o tamanho de abc e retomar
*/
void mm(float **A, float **B, float **RES, int size){
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      for (int k = 0; k < size; k++) {
        RES[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}

int main(int argc, char *argv[]){
	
    float **matriz_A,
          **matriz_B,
          **matriz_C;
    int l = 1, c = 1;
    float aux_soma;
    matriz_A = (float **)malloc(l * sizeof(float *));
    matriz_B = (float **)malloc(l * sizeof(float *));
    matriz_C = (float **)calloc(l, sizeof(float *));

	for(int i = 0; i < l; i++){
        matriz_C[i] = (float *)calloc(c , sizeof(float));
    }

    for(int i = 0; i < l; i++){
        matriz_A[i] = (float *)malloc(c * sizeof(float));
        for(int j = 0; j < c; j++){
            printf("Digite o numero para a posicao [%d][%d] da Matriz A : ", i, j);
            scanf("%f", &matriz_A[i][j]);
        }
    }
	printf("\n");
    for(int i = 0; i < l; i++){
        matriz_B[i] = (float *)malloc(c * sizeof(float));
        for(int j = 0; j < c; j++){
            printf("Digite o numero para a posicao [%d][%d] da Matriz B: ", i, j);
            scanf("%f", &matriz_B[i][j]);
        }
    }

    
    printf("\n\tElementos digitados na Matriz A\n");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("matriz_A[%d][%d] : %.2f\n", i, j, matriz_A[i][j]);
        }
    }
    printf("\n\tElementos digitados na Matriz B\n");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("matriz_B[%d][%d] : %.2f\n", i, j, matriz_B[i][j]);
        }
    }
    mm(matriz_A,matriz_B,matriz_C,l);

	printf("\n\tResultado da Matriz C\n");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("matriz_C[%d][%d] : %.2f\n", i, j, matriz_C[i][j]);
        }
    }


	printf("\n.::Realloc::.\n");


    matriz_A = (float **)realloc(matriz_A, 2*l*sizeof(float *));
    for(int i = 0; i < 2*l; i++)
        matriz_A[i] = (float *)realloc(matriz_A[i], 2*c*sizeof(float));

 	matriz_B = (float **)realloc(matriz_B, 2*l*sizeof(float *));
    for(int i = 0; i < 2*l; i++)
        matriz_B[i] = (float *)realloc(matriz_B[i], 2*c*sizeof(float));

    matriz_C = (float **)realloc(matriz_C, 2*l*sizeof(float *));
    for(int i = 0; i < 2*l; i++)
        matriz_C[i] = (float *)realloc(matriz_C[i], 2*c*sizeof(float));


 	for(int i = 0; i < l+l; i++)
        for(int j = 0; j < c+c; j++){
            printf("Digite o numero para a matriz_A [%d][%d] : ", i, j);
            scanf("%f", &matriz_A[i][j]);
        }
    for(int i = 0; i < l+l; i++)
        for(int j = 0; j < c+c; j++){
            printf("Digite o numero para a matriz_B [%d][%d] : ", i, j);
            scanf("%f", &matriz_B[i][j]);
    	}
    mm(matriz_A,matriz_B,matriz_C,l+l);

	printf("\n\tResultado da Matriz C\n");
    for(int i = 0; i < l+l; i++){
        for(int j = 0; j < c+c; j++){
            printf("matriz_C[%d][%d] : %.2f\n", i, j, matriz_C[i][j]);
        }
    }


	return 0;
}

