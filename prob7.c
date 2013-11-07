#include <math.h>
#include <stdio.h>

int isPrime(int num) {
	int i;

	if (num == 2) return 1;
	if (num <= 1 || num % 2 == 0) return 0;
	
	for (i = 3; i <= sqrt(num); i+= 2)
	{
		if(num % i == 0) return 0;
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	int primeCount = 0, currentPrime, i;

	for(i = 0 ; primeCount < 10001; i++){
		if(isPrime(i)){
			primeCount++;
			currentPrime = i;
			printf("Prime count: %d, currentPrime: %d\n", primeCount, currentPrime);
		}
	}
	printf("%d\n", currentPrime);
}