#include <stdio.h>
#include <math.h>

double sumOfSquares(int num){
	int i;
	double sum = 0;
	for (i = 1; i <= num; i++)
	{
		sum += pow(i, 2);
	}
	return sum;
}
double squareOfSums(int num){
	int i, sum = 0;
	for (i = 1; i <= num; i++)
	{
		sum += i;
	}
	return pow(sum, 2);
}


int main(int argc, char const *argv[])
{
	
	printf("%f\n", squareOfSums(100) - sumOfSquares(100));
	return 0;
}