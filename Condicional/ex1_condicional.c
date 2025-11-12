//OBI - Exercício do Bondinho. A turma do colégio vai fazer uma excursão na serra e todos os alunos e monitores 
//vão tomar um bondinho para subir até o pico de uma montanha. A cabine do bondinho pode levar 50 pessoas no 
//máximo,contando alunos e monitores, durante uma viagem até o pico. Neste problema, dado como entrada o número 
//de alunos e o núnero de monitores, você deve implementar um programa que diga se é possível ou não levar todos 
//os alunos e monitores em apenas uma viagem.

#include<stdio.h>

int main(){
    int aluno, monitor, x;
    
    printf("Qual o número de alunos confirmados na viagem? ");
    scanf("%d", &aluno);
    printf("\nQual o número de monitores confirmados na viagem? ");
    scanf("%d", &monitor);
    
    x = aluno + monitor;
    
    if(x<=50)
       printf("O número de pessoas é adequado. É possível levar todos em uma só viagem");
    
       else
           printf("O número de pessoas é excede a capacidade. É impossível levar todos em uma só viagem");
       
    
}
