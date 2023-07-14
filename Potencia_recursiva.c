//Cálculo de potencia de dois nuúmeros de forma recursiva
#include <stdio.h>

int potencia(int base, int expo){
    
    int pot;
    
    if(expo == 1){
        return base;
    }
    if(expo % 2 == 0){
        pot = potencia(base, expo/2);
        return (pot * pot)%1000;
    }
    else{
        pot = potencia(base, expo/2);
        return (pot * pot * base)%1000;
    }
}

int main () {

    int base, expo;

    printf("Digite o valor para a base: ");
    scanf("%d", &base);

    printf("Digite o valor para o expoente: ");
    scanf("%d", &expo);

    printf("%d\n", potencia(base, expo));
    
    return 0;
}