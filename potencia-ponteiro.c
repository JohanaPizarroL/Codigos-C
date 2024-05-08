#include <stdio.h>

void potencia(int* resultado, int a, int b){
    *resultado = 1; // inicializando var
    for(int i = 0; i < b; i ++){ // multiplicando b vezes
        *resultado = *resultado * a; //multiplicando a*a, b vezes
    }

}

int main(){

    int resultado;
    potencia(&resultado, 10, 5);
    printf("Resultado: %d", resultado);

    return 0;
}