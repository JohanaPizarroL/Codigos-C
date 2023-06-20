//alocação dinâmica de matriz

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ler_dimensoes(int* n){

	printf("Digite a dimensão da sua matriz, ela será quadrada: ");
	scanf("%d", &(*n));
}

void alocar(double*** m,int n){ //passagem por referência (* **m)
	//alocando dois vetores, vet de ponteiros e vet e elementos
	*m = (double**)calloc (n, sizeof(double*));

//primeiro elemento de cada linha
	(*m)[0] = (double*)malloc(n * n * sizeof(double));

	for(int i = 1; i < n; i++){ //inicia de 1, pois o [0] já foi
		(*m)[i] = (double*)calloc(n,sizeof(double)); //multiplicando linha*coluna*
		if((*m)[i] == NULL)
			printf("Erro ao alocar na memória!"); //verificando se alocou corretamente
	}
}

void preencher(double** m,int n){

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			m[i][j] = rand() % 10;//gerar numeros de 0 até 10
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

void desalocar(double*** m, int n){
	//teremos apenas dois vetores os quais devemos desalocar
	//vetor de ponteiros e vetor de elementos

	free((*m)[0]); //vet de ponteiros
	free(*m); //vet de elementos
	*m = NULL;
}


int main(){

	int n;
	double **m;

	ler_dimensoes(&n); //passagem por referência
	
	alocar(&m, n); //passando m por referência -> ***m (referência e ponteiro duplo)
	preencher(m, n);
	imprime(m, n);
	desalocar(&m, n);

	return 0;
}



