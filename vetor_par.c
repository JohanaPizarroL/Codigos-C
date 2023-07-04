//Vetores 
#include <stdio.h>
#define TAM 10


int main(){

	int vet[TAM], par = 0;

	printf("Digite os elementos do vetor: ");
	for(int i = 0; i < TAM; i++){
		scanf("%d", &vet[i]); 
	}

	for(int i = 0; i < TAM; i++){
		if(vet[i] > 10 && vet[i] % 2 == 0){ 
			par++;
		}
	}
	printf("Ha %d numeros pares maiores que 10 dentro do vetor.\n", par);


	return 0;
}

/*
	int vet[5] = {23,25,98,4566,1}; //declarando vetor com seus elementos

	//o nome do vetor sem indice retorna o endereço do 1ro elemento
	printf("%d\n", vet); //imprimindo o endereço - caso aciama
	printf("%d\n", *vet); ////imprimindo o valor do elem
*/