#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	char str[50];
	char verifica[50];
	int contador;
	int achou;

	printf("DIGITE STRING: ");
	scanf("%[^\n]",str);
	printf("A string digitada e: %s \n",str);
	getchar();
	printf("DIGITE A PALAVRA BUSCA: ");
	scanf("%[^\n]",verifica);
	printf("A palavra busca e: %s \n",verifica);
   
	for(int i=0;i<strlen(str);i++){
		//printf("Comparando str[%d] %c\n ",i,str[i]);
		if(str[i]==verifica[0]){
			achou=1;
			for(int j=0;j<strlen(verifica);j++){
			//	printf("---> Comparando str[%d] %c ",(i+j),str[i]);
			//	printf("com verifica[%d] %c \n",j,verifica[j]);
				if(str[i+j]!=verifica[j]){
			//		printf("Achou = false \n");
					achou=0;
					break;
				}
			}
			if(achou==1){
				contador++;
			}
			var = i++;
			print
			var = ++i;
			print
		}
	}
	printf("A palavra buscada foi encontrada %d vezes\n", contador);
	return 0;
}