//potencia com ponteiros

#include <stdio.h>

void potencia(int* resultado, int a, int b){
	*resultado = 1;

	// * para usar o conteúdo e não o endereço de memória

	for(int i = 0; i < b; i++){
		*resultado = *resultado * a;
	}
}

int main(){

	int a, b;
	printf("Digite a base: ");
	scanf("%d", &a);
	printf("Digite o expoente: ");
	scanf("%d", &b);

	int resultado;

	potencia(&resultado, a, b);
	printf("Resultado da potencia: %d", resultado);

	return 0;
}