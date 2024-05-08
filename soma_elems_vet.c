#include <stdio.h> 

int soma(int* nums, int tam){ //passamos como ponteiro pq eh array
    int soma = 0;
    for(int i = 0; i < tam; i++){
        soma += nums[i];
    }
    return soma;
}

int main(){
    int nums[3];
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;

    int total = soma(nums, 3);
    printf("A soma total dos elems do vetor eh: %d\n", total);

    return 0;
}