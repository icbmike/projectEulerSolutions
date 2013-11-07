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
	int largest = 0, i;
	long long num = 600851475143;
	for (i = 2; i <= num; i++)
	{	
		if (!isPrime(i)) continue;
		while (num % i == 0) {
			num /= i;
			largest = i;
			printf("factor: %d\n", i);
		}

	}
	printf("%d\n", largest);
	return 0;
}