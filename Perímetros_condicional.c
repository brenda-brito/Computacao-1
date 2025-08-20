//2. Faça um programa que tendo como entradas (via teclado) a base e altura de um retângulo, 
//calcule o perímetro (2*base + 2*altura) e a área (base*altura) e imprima se o perímetro é maior que a área.

//3. Modifique o programa anterior para que imprima qual dos dois é maior (perímetro ou área). 
//Assuma que nunca podem ser iguais.

//4. Modifique o programa anterior para que imprima qual dos dois é maior (perímetro ou área) ou se são iguais.

#include<stdio.h>

int main(){
    float base, h, x, per;
    
    printf("Qual a base do triângulo? ");
    scanf("%2f", &base);
    printf("\nQual a altura do triângulo? ");
    scanf("%2f", &h);
    
    x = 2*(base+h);
    per= base*h;
    
    printf("\nPerímetro: %.1f\n Area:%.1f\n", per,x);
    
    if(per>x)
       printf("\nO perímetro é MAIOR que a área.");
    
       else if (per<x)
           printf("\nO perímetro é MENOR que a área.");
            
            else
            printf("\nO perímetro é IGUAL a área.");
    
}
