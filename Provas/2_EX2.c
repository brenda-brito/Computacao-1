#include <stdio.h>

#define file_path "numeros.txt"

int calculaMedia (int v[], int x)
{
    int total = 0;
    int i = 0; 
    
    while(i < x)
    {
        printf("O espaco de v[%d] tem valor: %d\n", i, v[i]);
        total += v[i];
        i++; 
    }

    return (total / x);
}

int main ()
{
    FILE* arquivo;
    int i, num, v[10];

    arquivo = fopen(file_path, "w");
    if(arquivo == NULL)
        return 1;

    i = 0; 
    
    while(i < 10)
    {
        printf("Digite o numero inteiro: ");
        
        if (scanf("%d", &num) != 1) { 
            fprintf(stderr, "Erro na leitura do numero.\n");
           
            break; 
        }

        fprintf(arquivo, "%d\n", num);
        i++; 
    }

    fclose(arquivo);

   
    arquivo = fopen(file_path, "r");
    if(arquivo == NULL)
    {
        printf("Nao foi possivel encontrar o arquivo %s\n", file_path);
        return 1;
    }
    
    i = 0; 

    
    while((fscanf(arquivo, "%d", &num) == 1) && i < 10)
    {
        printf("Leu %d\n", num);
        
        v[i] = num;

        i++;
    }
    
    
    fclose(arquivo);
    
    printf("\nA media ficou igual a: %d\n", calculaMedia(v, i));

    return 0;
}