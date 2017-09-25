#include <stdio.h>
#include <stdlib.h>
/*
MALLOC aloca e nao zera memoria
*/
int main(int argc, char *argv[]){
	int *numeros;
	int qde_elem = 3;

	numeros = (int *)malloc(qde_elem *sizeof(int));

	for(int i =0;i<qde_elem;i++){
		 printf("Digite o numero para a posicao %d : ", i);
		  scanf("%i", &numeros[i]);
	}

   printf("\n\tElementos digitados\n");
    for(int i = 0; i < qde_elem; i++){
        //printf("numeros[%d] : %.2f\n", i, numeros[i]);
        printf("numeros[%d] => %d\n",i, numeros[i]);

    }

    return 0;
}	