//Faça um programa que sorteie um número aleatório entre 1 e 500 e então peça ao usuário para adivinhar este valor. O
//programa deverá indicar a cada tentativa do usuário se ela é maior ou menor que o número mágico e contar o número
//de tentativas. Quando o usuário conseguir acertar o número, o programa deverá classificar o usuário como: (a) de 1 a
//3 tentativas: \o/; (b) d 4 a 6 tentativas: :-D; (c) de 7 a 10 tentativas: :-) e (d) Mais que 10 tentativas: :-\


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
    
    printf("%d",W);
    
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
    if (i>=4 && i<=6){
        printf("\n\nVocê acertou em %d tentativas. Jogador na categoria B :-D", i);
    }
    if (i>=7 && i<=10){
        printf("\n\nVocê acertou em %d tentativas. Jogador na categoria C :-) ", i);
    }
    if (i>=10){
        printf("\n\nVocê acertou em %d tentativas. Jogador na categoria D :-/", i);
    }
    
}