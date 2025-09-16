#include<stdio.h>

int main() {
	int frutas, i=0;
	float valor, soma=0.0, media, real;

	printf("Digite a quantidade de frutas vendidas: ");
	scanf("%d", &frutas);

	while (frutas>i) {
		i++;
		printf("\nQual o preC'o da fruta %d? ", i);
		scanf("%f", &valor);
		soma+=valor;
	}

	media=soma/frutas;

	do {
		printf("\nTente acertar a media do valor: ");
		scanf("%f",&real);

		if(real<=0) {
			break;
		} else if (real<media) {
			printf("\nErrou para menos! Tente novamente.");
		} else if (real>media) {
			printf("\nErrou para mais! Tente novamente.");
		} else if (real==media) {
			printf("\nAcertou a mC)dia!");
			break;
		}
	} while (real>0);

	return 0;
}