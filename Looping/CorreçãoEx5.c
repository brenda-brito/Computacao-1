#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i, W, n;
   
    i=0;
    srand(time(NULL));
    W=rand()% 500 + 1;
    
    printf("%d\n",W);
    
    do{
        i++;
        printf("Tentativa %d. \nTente adivinhar o número mágico: ", i);
        scanf("%d", &n);

            if(n<W){
                printf("\n\nO valor é menor que o número mágico. Tente novamente");
            } else{
                printf("\n\nO valor é maior que o número mágico. Tente novamente");
            }
            printf("\n\n");
    }while(n!=W);
    
    if (i>=1 && i<=3){
        printf("\n\nVocê acertou em %d tentativas. Jogador na categoria A o/", i);
    } 
    else if (i>=4 && i<=6){
        printf("\n\nVocê acertou em %d tentativas. Jogador na categoria B :-D", i);
    }
    else if (i>=7 && i<=10){
        printf("\n\nVocê acertou em %d tentativas. Jogador na categoria C :-) ", i);
    }
    else if (i>=10){
        printf("\n\nVocê acertou em %d tentativas. Jogador na categoria D :-/", i);
    }
    
}
