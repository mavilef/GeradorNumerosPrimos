#include <stdio.h>

int isItPrime (int number);

int main(){

	int numberOfPrimes;

	printf("How many prime numbers do you want to calculate?\n");
	scanf("%d",&numberOfPrimes);

	printf(" ");

	if(numberOfPrimes > 0){
		for(int i = 2, j = 0; j < numberOfPrimes; i++)
			if(isItPrime(i)){
				j++;

				if(j % 10 == 0)
					printf("%d\n ",i);
				else
					printf("%d ",i);

			}
	}
	printf("\n");

	return 0;
}

int isItPrime (int number){

	for(int divisor = 2; divisor<=number/2; divisor++){
		if(number % divisor == 0){
			return 0;
		}
	} 
	return 1;



}

