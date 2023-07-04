//Vetores - Somando os elemetos de um vetor

#include <stdio.h>

int main(){

	int soma = 0 , n;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);

	int A[n];

	printf("Digite os elementos do vetor: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &A[i]); //guardando o elemento na posição i
	}

	for(int i = 0; i < n; i++){
		soma += A[i];
	}
	printf("A soma de todos os elementos do vetor eh %d.\n", soma);

	return 0;
}