#include <stdio.h>
#include <stdlib.h>

int mul_by_pot_2(int numero, int potencia){
    return numero >> potencia;
}

int main(int argc, char *argv[]){
    int x, potencia;
    printf("Informe um inteiro ");
    scanf("%d", &x);
    printf("Informe uma potencia de 2 ");
    scanf("%d", &potencia);
    printf("%d * 2^(%d) = %d\n",x, potencia, mul_by_pot_2(x, potencia)); 
    
    return 0;
}