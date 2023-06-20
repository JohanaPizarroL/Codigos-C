//alocação dinâmica de matriz

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ler_dimensoes(int* n){

	printf("Digite a dimensão da sua matriz, ela será quadrada: ");
	scanf("%d", &(*n));
}

void alocar(double** m,int n){

	for(int i = 0; i < n; i++){
		m[i] = (double*)calloc(n, sizeof(double**));
		if(m[i] == NULL)
			printf("Erro ao alocar na memória!"); //verificando se alocou corretamente
	}
}

void preencher(double** m,int n){

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){

			//geracao de numeros aleatórios com a funcao srand - alocando os numeros dentro de mem

			m[i][j] = rand() % 10;//gerar numeros aleatorios
		}

	}

}


void imprime(double** m, int n){

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%.1f  ", m[i][j]);
		}
		printf("\n");		
	}
}

void desalocar(double** m, int n){
/* Usando apenas um free estariamos desalocando apenas uma linha da nossa
matriz, o que não está correto, então usarei um loop para desalocar primeiro os 
vetores com numeros e depois o vetor de ponteiros
*/
	for(int i = 0; i < n; i++){
		free(m[i]); //desalocando cada linha da matriz
	}
	free(m); //desalocando a ultima linha(vetor)

}


int main(){

	int n;
	double **m;

	ler_dimensoes(&n); //passando n por referencia

	m = (double**)calloc (n, sizeof(double**));

	alocar(m, n);
	preencher(m, n);
	imprime(m, n);
	desalocar(m, n);

/*
Neste caso todas as funções usam as variáveis m e n (matriz e suas dimensões)
Poderiamos declarar elas como variáveis globais e não passar nenhum argumento
às funções.
*/

	return 0;
}



