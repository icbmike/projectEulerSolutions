#include <stdio.h>
#include <math.h>

// int nthTriangleNumber(int n) 
// {
// 	int sum = 0;
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		sum += i;
// 	}
// 	return sum;
// }

int countFactors(int num)
{
	int factorCount = 1;
	for (int i = 1; i <= sqrt(num); i++)
	{
		if(num % i == 0) factorCount+=2;
	}
	if ((int)sqrt(num) * (int)sqrt(num) == num) factorCount--;
	return factorCount;
}

int main(int argc, char const *argv[])
{
	int n = 1;
	int nthTriangleNumber = 1;
	while(countFactors(nthTriangleNumber) <= 500){
		n++;
		nthTriangleNumber += n;
		
	}
	printf("%d\n", nthTriangleNumber);
	return 0;
}