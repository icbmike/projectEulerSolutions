#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isPalindrome(unsigned int num) {
	int i;
	char string[7];
	sprintf(string, "%d", num);
	int isPalendrome = 1;

	for (i = 0; i < strlen(string) / 2; i++)
	{
		isPalendrome = isPalendrome && string[i] == string[strlen(string) - i - 1];
		
	}

	return isPalendrome;
}

int main(int argc, char const *argv[])
{
	unsigned int i, j, largest = 0;
	for (i = 9999; i > 99; i--)
	{
		for (j = 9999; j > 99; j--)
		{
			if(isPalindrome(i*j)){
				if ((i * j) > largest) largest = i * j; 
			}
		}
	}
	printf("%u\n", largest);
}