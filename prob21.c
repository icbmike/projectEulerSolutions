#include <stdio.h>

int dCache[20000];

int d(int num)
{
	int sum = 1;
	for (int i = 2; i <= num / 2; ++i)
	{
		if (num % i == 0) sum += i;
	}
	return sum;
}

void amicableTest(int a){
	int b = d(a);
	int db = d(b);
	if(a != b && db == a){
		
	}
	 
	
}

int main(int argc, char const *argv[])
{
	int sum = 0;
	for (int i = 2; i < 20000; ++i)
	{
		 
		dCache[i] = 0;
	}

	for (int i = 2; i < 10000; ++i)
	{
		amicableTest(i);
	}

	for (int i = 2; i < 20000; ++i)
	{
		sum += dCache[i];
	}

	printf("%d\n", sum);	
	return 0;
}