#include <stdio.h>

void returnFactorization();

int main(int argc, char* argv[]){
	int inputNumber = 0;
	printf("Please input an integer value: ");
   	scanf("%d", &inputNumber);
   	returnFactorization(inputNumber);
	return 0;
}

void returnFactorization(int inputNumber){
	printf("Factors of %d: \n", inputNumber);
}