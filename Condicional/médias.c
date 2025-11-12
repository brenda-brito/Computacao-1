// Faça um programa que
// a) recebe como entrada via teclado uma opção e três valores. O programa deve calcular e imprimir uma média
//correspondente a uma das seguintes opções:
//•A = média aritmética.
//•P = média ponderada com pesos 1, 2 e 3 para o primeiro, segundo e terceiro valor, respectivamente.
//•G = média geométrica.
//•H = média harmônica.
//O programa deve aceitar as opções tanto em caracteres maiúsculos como minúsculos. O programa deve exibir uma
//mensagem de erro caso a opção escolhida seja inválida.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    double x, y, z;
    double A, P, G, H;
    char type;
    
    printf("\nPara os três valores que serão adicionados, escolha o tipo de média usando a letra indicada:\nA: Média aritmética\nP: Média ponderada:\nG:Média geométrica\nH:Média harmônica\n");
    scanf("%c",&type);
    
    if(type!='A'&& type!='a' && type!='P'&& type!='p'&& type!='G'&& type!='g'&& type!='H'&& type!='h') 
    {
        printf("\n\nO valor inserido não é válido");
        return 0;
        }
    
    printf("\n\nInsira a primeiro valor: ");
    scanf("%lf",&x);
    printf("\nInsira a segundo valor: ");
    scanf("%lf",&y);
    printf("\nInsira a terceiro valor: ");
    scanf("%lf",&z);
    
    A=(x+y+z)/3;
    P=(x+(y*2)+(z*3))/6;
    G=cbrt(x*y*z);
    H=3/((1/x)+(1/y)+(1/z));
    
    if (type=='A' || type=='a')
        printf("\n\nA média aritmética dos três valores é %.2lf", A);
    if (type=='P' || type=='p')
        printf("\n\nA média aritmética dos três valores é %.2lf", P);
    if (type=='G' || type=='g')
        printf("\n\nA média aritmética dos três valores é %.2lf", G);
    if (type=='H' || type=='h')
        printf("\n\nA média aritmética dos três valores é %.2lf", H);
    
    
    return 0;
}
