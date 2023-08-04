#include <stdio.h>

int soma_intervalo(int a, int b){

	int soma = 0;

	for(int i = a + 1; i < b; i++){
		printf("valor atual de i: %d\n", i);
		soma += i;
	}


	return soma;
}

int main(void){

	int a, b;
	printf("Digite dois numeros inteiros: ");
	scanf("%d %d", &a, &b);

	int soma = soma_intervalo(a, b);

	printf("A soma do intervalo entre %d e %d eh = %d ", a, b, soma);

	return 0;
}