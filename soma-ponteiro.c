#include <stdio.h>

void soma(int *num, int a, int b){ //void - função sem retorno, usaremos ponteiros

    (*num) = a + b; // *num porque estamos usando o valor de num, não o endereço

}

int main(){
    int a, b, num = 0;

    printf("Digite dois numeros, a e b: ");
    scanf("%d %d", &a, &b);
    soma(&num, a, b); //passando o endereço da variável num
    printf("A soma de a + b eh: %d", num);

    return 0;
}