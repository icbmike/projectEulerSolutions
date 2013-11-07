#include <stdio.h>
#include <stdlib.h>
//#define HASH_TABLE_SIZE 10000000

// int collatzSequenceChainLengths [HASH_TABLE_SIZE];


long calculateCollatzChainLength(long term){

    if(term < 0)	
    	abort();

	if(term != 1){
		// if (collatzSequenceChainLengths[term] != -1){
		// 	return collatzSequenceChainLengths[term];
		// }
		if(term % 2 == 0){
			return 1 + calculateCollatzChainLength(term / 2);
		}else{
			return 1 + calculateCollatzChainLength(3 * term + 1);
		}
		//return collatzSequenceChainLengths[term];
	}else{
		return 1;
	}
}

int main(int argc, char const *argv[])
{
	// for (long i = 0; i < HASH_TABLE_SIZE; ++i)
	// {
	// 	//Initialize collatz sequence length hash map to  -1
	// 	collatzSequenceChainLengths[i] = -1;
	// }
	long longestChain = 0, startingTerm;
	for (int i = 1; i < 1000000; ++i)
	{

		int chainLength = calculateCollatzChainLength(i);
		if (chainLength > longestChain) {
			longestChain = chainLength;
			startingTerm = i;
		}
	}
	printf("Starting term: %ld, Chain length: %ld\n", startingTerm, longestChain);
	
	return 0;
}
