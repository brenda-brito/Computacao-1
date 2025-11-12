//Frota de Táxi (OBI2005): A Companhia de Táxi Tabajara (CTT) é uma das maiores empresas de transporte do país. 
//Possui uma vasta frota de carros e opera em todas as grandes cidades. Recentemente a CTT modernizou a sua frota, 
//aquirindo um lote de 500 carros bi-combustíveis (carros que podem utilizar como combustível tanto álcool quanto gasolina). 
//Além do maior conforto para os passageiros e o menor gasto com manutenção, com os novos carros é possível uma redução adicional de 
//custo: como o preço da gasolina está sujeito a variações muito bruscas e pode ser vantagem, em certos momentos, utilizar álcool como 
//combustível. Entretanto, os carros possuem um melhor desempenho utilizando gasolina, ou seja, em geral, um carro percorre mais 
//quilômetros por litro de gasolina do que por litro de álcool.
//•Tarefa: Você deve escrever um programa que, dados o preço do litro de álcool, o preço do litro de gasolina e os quilômetros por litro 
//que um carro bi-combustível realiza com cada um desses combustíveis, determine se é mais econômico abastecer os carros da CTT com álcool 
//ou com gasolina. No caso de não haver diferença de custo entre abastecer com álcool ou gasolina a CTT prefere utilizar gasolina.
//•Entrada: A entrada é composta por quatro números reais, A, G, Rae Rg, representando respectivamente o preço por litro do álcool, 
//o preço por litro da gasolina, o rendimento (km/l) do carro utilizando álcool e o rendimento (km/l) do carro utilizando gasolina.
//•Saída: Escrever o caractere ’A’ se é mais econômico abastecer a frota com álcool ou o caractere ’G’ se é mais
//econômico ou indiferente abastecer a frota com gasolina

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    //preço do litro de alcool(A) e gasolina(G) e km/litro do carro(Rae) e rendimento (Rg), if mais economico
    float A, G, Rae, Rg;
    
    printf("Insira o preço do litro de álcool: ");
    scanf("%f", &A);
    
    printf("\n\nInsira o preço do litro de gasolina: ");
    scanf("%f", &G);
    
    printf("\n\nQuantos KM/L de álcool seu carro faz: ");
    scanf("%f", &Rae);
    
    printf("\n\nQuantos KM/L de gasolina seu carro faz: ");
    scanf("%f", &Rg);
    
    if (A / Rae < G / Rg) {
        printf("\nMais econômico: Álcool (A)\n");
    } 
    else {
        printf("\nMais econômico: Gasolina (G)\n");
    }
    
    return 0;
}
