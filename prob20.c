#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gmp.h>

int main(int argc, char const *argv[])
{
	mpz_t fact;
	mpz_init(fact);
	mpz_set_ui(fact, 1);

	for (int i = 1; i <= 100; ++i)
	{
		mpz_mul_si(fact,  fact, i);
	}

	char buffer[200];
	gmp_sprintf(buffer, "%Zd", fact);


	int sum = 0;
	for (int i = 0; i < strlen(buffer); ++i)
	{
		sum += buffer[i] - '0';
	}
	printf("%d\n", sum);
	return 0;
}