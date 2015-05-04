#include <stdio.h>

//function stub 
void returnFactorization();

//Just take in number and send to function
int main(int argc, char* argv[]){
	int inputNumber = 0;
	printf("Please input an integer value: ");
   	scanf("%d", &inputNumber);
   	if(inputNumber == 1){
   		printf("1");
   	} else {
   		returnFactorization(inputNumber);
    }
   	printf("\n");
	return 0;
}

//Actually calculate prime factors
void returnFactorization(int inputNumber){
	for(int i = 2; i * i <= inputNumber; i++){
		//printf("%d / %d = %d\n", inputNumber, i, (inputNumber % i));
		if(inputNumber % i == 0){
			printf("%d ", i);
			returnFactorization(inputNumber / i);
			return;
		}
	}
	if (inputNumber > 1)
		printf("%d ", inputNumber);
}
