//strings

#include <stdio.h>
#include <string.h>

int main (){

	char str[20], str2[20];

	printf("Digite a frase 1:\n");
	scanf("%[^\n]s", str);

	printf("Digite a frase 2:\n");
	scanf(" %[^\n]s", str2);

	printf("Tamanho de str: %lu e tamanho de str2: %lu\n", strlen(str), strlen(str2));

	if(!strcmp(str, str2)){
		printf("frase 1 = frase 2\n");
	}
	else if(strcmp(str, str2) > 0){
		printf("frase 1 > frase 2\n");
	}
	else{
		printf("frase 1 < frase 2\n");
	}
	
// contatenando as duas frases
	strcat(str, str2);
	printf("strcat = %s\n", str);
	

	return 0;
}