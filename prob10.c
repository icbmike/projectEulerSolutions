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
	long long sum = 0, i;
	for (i = 1; i < 2000000; i+=2)
	{
		if(isPrime(i)){
			sum += i;
		}
	}

	//Faster method is to use eratosthenes sieve.
	printf("%lld\n", sum);
}