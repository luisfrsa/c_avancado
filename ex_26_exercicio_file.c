
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char url[]="result.txt", buffer[10];
    int num=1,qde_elem=0,total=0;
    float result;

    FILE *arq;
    
    arq = fopen(url, "w");
    if(arq == NULL){
        printf("Erro, nao foi possivel abrir o arquivo\n");
    }else{
        while(num!=0){
            scanf("%d", &num);
            getchar();
            printf("%d Escrito\n",num);
            if(num!=0)
                fprintf(arq, "%d ", num);
        }
        fclose(arq);
        arq = fopen(url, "r");
        while((fscanf(arq,"%d", &num))!=EOF){
            qde_elem++;
            total+=num;
        }
        printf("O total e: %d \nA Qde de elem e: %d \nA media e %.2f:",total,qde_elem,(total/qde_elem));
    }
    fclose(arq);
    return 0;
}

void menu(){
  
}
