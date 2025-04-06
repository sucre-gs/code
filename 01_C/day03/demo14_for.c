#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;

	for (j = 0; j < 3; j++)
	{
		printf("===================\n");
		
		for (i = 0; i < 5; i++)
		{
			printf("-------------------------------\n");
			printf("i = %d, j = %d\n", i, j);
		}
	}

	return 0;
}
