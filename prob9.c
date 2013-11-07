#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int a = 1, b = 1, c = 1;


	for(a = 0; a <= 1000 ; a++)
	{
		for(b = a + 1; b <= 1000 ; b++)
		{
			c = 1000 - a - b;
			if(a*a + b*b == c*c && a <b && b < c){
				break;	
			}
		}
		if(a*a + b*b == c*c && a <b && b < c){
			break;	
		}
	}

	printf("a: %d b: %d c: %d product: %d", a, b, c, a * b * c);
	return 0;
}