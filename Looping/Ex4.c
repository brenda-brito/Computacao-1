//FaC'a um programa que verifica se os dC-gitos de um valor n fornecido pelo usuC!rio sC#o todos iguais entre si.
//Exemplos de Entradas Exemplos das SaC-das correspondentes
//555 Os digitos sao todos iguais!
//515 Os digitos NAO sao todos iguais!
//111 Os digitos sao todos iguais!

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int x, y, z, i;
	i=1;

	printf("Insira um valor:\n ");
	scanf("%d", &x);


	z = x % 10;


	while (x > 0) {
		y = x % 10;
		if (y != z) {
			i = 0;
			break;
		}
		x = x / 10;
	}


	if (i) {
		printf("Os digitos sao todos iguais!\n");
	} else {
		printf("Os digitos nao sao todos iguais!\n");
	}

	return 0;
}
