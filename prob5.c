#include <stdio.h>

int gcd(int a, int b) {
	int t;
    while (b != 0){
    	t = b;
    	b = a % t;
    	a = t;
    }
    return a;
}

int lcm(int a, int b) {
	return a / gcd(a,b) * b;
}

int main(int argc, char const *argv[])
{
	int i, currentLCM = lcm(1, 2);

	for (i = 3; i <= 20; i++)
	{
		currentLCM = lcm(currentLCM, i);
	}
	printf("%d\n", currentLCM);
	return 0;
}