//funcao soma de arrays

#include <stdio.h>

int soma(int nums[], int n){
	int total = 0;

	for(int i = 0; i < n; i++){
		total += nums[i];

	return total;
}

int main(){
	int nums[3];

	nums[0] = 10;
	nums[1] = 20;
	nums[2] = 30;

	int total = soma(nums, 3);

	printf("Resultado da soma: %d", total);

	return 0;
}