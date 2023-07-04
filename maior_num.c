//Vetores 
#include <stdio.h>

int main(){

	int n;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);

	float vet[n], maior;

	printf("Digite os elementos do vetor: ");
	for(int i = 0; i < n; i++){
		scanf("%f", &vet[i]); 
	}

	for(int i = 0; i < n; i++){
		if(vet[i] > vet[i + 1]){ 
			maior = vet[i];
		}
	}
	printf("O maior numero dentro o detor eh o %.2f.\n", maior);


	return 0;
}