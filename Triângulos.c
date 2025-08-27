//Dados 3 valores A, B, C (lados do triângulo) fornecidos pelo usuário via teclado, implemente um programa para verificar
//se estes valores formam um triângulo, e em caso afirmativo, classificá-lo como equilátero, isósceles ou escaleno (imprimir
//mensagem informando o tipo ou uma mensagem específica caso não formem um triângulo).

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float A,B,C;
    
    printf("Insira o lado A do triângulo: ");
    scanf("%f", &A);
    printf("\nInsira o lado B do triângulo: ");
    scanf("%f", &B);
    printf("\nInsira o lado C do triângulo: ");
    scanf("%f", &C);
    
    if (!(A<B+C && B<A+C && C<A+B)) {
        printf("\n\nOs valores não formam um triângulo");
        return 0; 
        }
    
    if (A==B && B==C){
        printf("\n\nO triângulo é equilátero");
    }
    
    else if (A!=B && B!=C && A!=C){
        printf("\n\nO triângulo é escaleno");
    }
        
    else 
        printf("\n\nO triângulo é isósceles");
    
}