#include<stdio.h>
#include<locale.h>

int main(){
    int quantidade_1, quantidade_2;
    float valor;
    
    #define PRIMEIRA 2
    #define ULTIMA 1
    
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade_1);
    
    printf("\nDigite a quantidade: ");
    scanf("%d", &quantidade_2);
    
    valor = ((quantidade_1+quantidade_2)*(ULTIMA-PRIMEIRA))/2;
    
    if (valor>quantidade_1){
        printf("\nO resultado é %.2f e as quantidades são %d e %d", valor, quantidade_1, quantidade_2);
    } else {
        printf("\nO resultado com desconto é %.2f e as quantidades são %d e %d", valor*0.8, quantidade_1, quantidade_2);
    }
}
