//string - caracter mais frequente

#include <stdio.h>


char rep_letra(char frase[100]){
	//para percorrer uma string(no modo vetor) devemos saber o tamanho ou percorrer até 
	//encontrar o char que indica fim de string -> \0

	int contachar[256] = {0}; // Array de contagem de caracteres (ASCII)
	int conta = 0; // Contagem máxima de ocorrências
	char mais_freq; //caractere mais frequente

	for(int i = 0; frase[i] != '\0'; i++) { //i ate o \0  ou de i < strlen(frase)...

		// Itera pela string e atualiza a contagem de cada caractere

		contachar[(unsigned char)frase[i]]++;
        if (contachar[(unsigned char)frase[i]] > conta) {
   			conta = contachar[(unsigned char)frase[i]];
    		mais_freq = frase[i];
		}
	} 

	return (mais_freq);
}

int main(){

	char frase[100];

	printf("Digite uma frase: ");
	scanf(" %[^\ns]", frase);

	printf("A letra que mais se repete na sua frase eh: '%c'", rep_letra(frase));


	return 0;
}