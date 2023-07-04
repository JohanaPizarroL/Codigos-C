//strings

#include <stdio.h>
#include <string.h>

int main (){

	char str[100];

	printf("Digite a frase:\n");
	scanf("%[^\n]s", str);

	int size = 0;

	while (str[size] != '\0') {//até chegar ao final da string 
	    size++; //somando a quantidade de char
	}

	printf("Tamanho da string: %d\n", size);

	return 0;
}