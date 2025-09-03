//Leia um valor inteiro n, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3
//valores reais. Faça um programa que leia os 3 valores de cada caso de teste e apresente a média ponderada para cada
//caso, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. No exemplo a
//seguir temos n=4, ou seja, 4 casos de teste, cada um deles com 3 variáveis fornecidas como entrada e a média ponderada
//apresentada como saída:


#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int t, i;
    float m;
    int x, y, z;
    
    i=1;
    
    printf("Insira o número de testes desejados: ");
    scanf("%d", &t);
    
    while (i<=t){
        printf("\nInsira o valor 1: ");
        scanf("%d", &x);
    
    
        printf("\nInsira o valor 2: ");
        scanf("%d", &y);
    
    
        printf("\nInsira o valor 3: ");
        scanf("%d", &z);
    
        m=(x+(y*2)+(z*3))/6;
    
        printf("\n\nA média ponderada dos três valores é %.1f", m);
        i++;
    }
    
    printf("\n\nTestes concluídos!");
    
}