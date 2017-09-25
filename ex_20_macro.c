#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define shift_left(num,pot) ((num)<<(pot))
#define shift_right(num,pot) ((num)>>(pot))
#define and_bit(num1,num2) ((num1)&(num2))
#define or_bit(num1,num2) ((num1)|(num2))
#define xor_bit(num1,num2) ((num1)^(num2))

/*
int shift_left(int numero, int potencia){
    return numero << potencia;
}
int shift_right(int numero, int potencia){
    return numero >> potencia;
}
int and_bit(int num1, int num2){
	printf("BIN %s \n",int2bin(num1));
	printf("BIN %s \n",int2bin(num2));
	printf("BIN %s \n",int2bin(num1 & num2));
	return num1 & num2;
}
int or_bit(int num1, int num2){
	return num1 | num2;
}

int xor_bit(int num1, int num2){
	return num1 ^ num2;
}
int not_bit(int num1){
	return ~num1;
}
*/

void solicita_numeros(int op,int *num1,int *num2){
	printf("Digite o primeiro numero");
	scanf("%d", num1);
	getchar();
	if(op!=4){
		printf("Digite o segundo numero");
		scanf("%d", num2);
		getchar();
	}
}


char * int2bin(int i)
{
	printf("Int: %d\n ",i);
    size_t bits = sizeof(int) * CHAR_BIT;

    char * str = malloc(bits + 1);
    if(!str) return NULL;
    str[bits] = 0;

    // type punning because signed shift is implementation-defined
    unsigned u = *(unsigned *)&i;
    for(; bits--; u >>= 1)
        str[bits] = u & 1 ? '1' : '0';

    return str;
}


int main(int argc, char *argv[]){
   int operacao=1;
	int int1,int2;
	while(operacao!=0){
		printf("O que voce deseja fazer?\n");
		printf("1 - And &.\n");
		printf("2 - Or |.\n");
		printf("3 - Xor ^.\n");
		printf("4 - Not ~.\n");
		printf("5 - Left.\n");
		printf("6 - Right.\n");
		printf("0 - Finalizar.\n");
		scanf("%d",&operacao);
		getchar();
		
		switch(operacao){
			case 1: 
			solicita_numeros(operacao, &int1, &int2);
			printf("%d\n",and_bit(int1, int2)) ;
			break;
			case 2:
			 solicita_numeros(operacao, &int1, &int2);
			printf("%d\n",or_bit(int1, int2));
			  break;
			case 3:
			 solicita_numeros(operacao, &int1, &int2);
			printf("%d\n",xor_bit(int1, int2)); 
			 break;
			case 4:
			 solicita_numeros(operacao, &int1, &int2);
			printf("%d\n",not_bit(int1));
			 break;
			case 5:
			 solicita_numeros(operacao, &int1, &int2);
			printf("%d\n",shift_left(int1, int2));  
			break;
			case 6: 
			solicita_numeros(operacao, &int1, &int2);
			printf("%d\n",shift_right(int1, int2)); 
			 break;
			default:
			break;
		}
	}
    return 0;
}