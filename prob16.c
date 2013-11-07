#include <stdio.h>
#include <gmp.h>
#include <string.h>


int charToInt(char c){
	return c - '0';
}

int main(int argc, char const *argv[])
{
	mpz_t integer;
	mpz_init(integer);

	mpz_ui_pow_ui(integer, 2, 1000);
	char buffer[1000];
	gmp_sprintf(buffer, "%Zd", integer);
	
	int sum = 0;
	for (int i = 0; i < strlen(buffer); ++i)
	{
		sum += charToInt(buffer[i]);
	}

	printf("%d\n", sum);
	return 0;
}