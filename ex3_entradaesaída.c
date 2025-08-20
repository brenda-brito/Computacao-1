#include <stdio.h>
 int main() {
    int i;
    float f;
    char c;

    printf("Digite um caractere: ");
    scanf("%c");
    printf("\nDigite um valor inteiro: ");
    scanf("%d"); 
    printf("\nEntre com um numero de ponto flutuante (valor nao inteiro): ");
    scanf("%.2f");
    printf ("\nOs números apresentados foram %c, %d e %f", c,f,i);

    return 0;
 }