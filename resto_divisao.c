#include <stdio.h>

int calcula_resto(int a, int b){

	//resto = divisor - (dividendo * quociente)

	int divisao = a / b;

	int resto = a - (b * divisao);

	return resto;
}

int main(void){

	int a, b;
	printf("Digite dois numeros inteiros: ");
	scanf("%d %d", &a, &b);

	printf("O resto da divisao eh = %d\n", calcula_resto(a, b));


	return 0;
}