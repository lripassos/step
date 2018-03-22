#include<stdint.h>
#include<stdio.h>
#define TAM 4 /* #Define substitui o valor atribuido ao tamanho da matriz. No código abaixo, ao invés de 4, substiutiu-se por TAM  */
int main() {

	int estacoes[4] = {10, 20, 30, 40};

	for (int i = 0; i < 4; i++) {

		printf("Valor = %d\n", estacoes[i]);
			
	}

	printf("%p %p\n", estacoes, estacoes + TAM);

	for (int *j = estacoes; j != (estacoes + TAM); j++) {

		printf("%p %d\n", j, *j);
	}

	return 0;
}