#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
	int weight;
	int maxPath;

	int leftIndex;
	int rightIndex;
} node_t;
node_t nodes[120];
int max(int a, int b)
{
	return (a > b) ? a : b;
}

int maxPath(node_t node)
{
	if(node.maxPath != -1){
		return node.maxPath;	
	}
	if(node.leftIndex != -1 || node.rightIndex != -1)
		node.maxPath = node.weight + max(maxPath(nodes[node.leftIndex]), maxPath(nodes[node.rightIndex]));
	else 
		node.maxPath = node.weight;
	return node.maxPath;
}

int main(int argc, char const *argv[])
{
	char string[] = "75 95 64 17 47 82 18 35 87 10 20 4 82 47 65 19 1 23 75 3 34 88 2 77 73 7 63 67 99 65 4 28 6 16 70 92 41 41 26 56 83 40 80 70 33 41 48 72 33 47 32 37 16 94 29 53 71 44 65 25 43 91 52 97 51 14 70 11 33 28 77 73 17 78 39 68 17 57 91 71 52 38 17 14 91 43 58 50 27 29 48 63 66 4 68 89 53 67 30 73 16 69 87 40 31 4 62 98 27 23 09 70 98 73 93 38 53 60 4 23";
	
	char * tok;
	int i = 0;
	tok = strtok(string, " ");
	
	//Parse the input string
	while(tok != NULL)
	{
		nodes[i].weight = atoi(tok);
		nodes[i].maxPath = -1;
		tok = strtok(NULL, " ");
		i++;
	}
	//Set the child pointers
	for (int i = 0; i < 15; ++i)
	{
		for (int j = 0; j <= i ; ++j)
		{
			int index = i * (i+1) /2 + j;
			if (i < 14){
				nodes[index].leftIndex = (i+1) * (i + 2) / 2 + j;
				nodes[index].rightIndex = (i+1) * (i + 2) / 2 + j + 1;
			}else{
				nodes[index].leftIndex = -1;
				nodes[index].rightIndex = -1;
			}
		}
		
	}
	printf("%d\n", maxPath(nodes[0]));
	
	
	return 0;
}

//Hugh Herr TED


