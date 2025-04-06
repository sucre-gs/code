#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;

	for (j = 0; j < 3; j++)
	{
		printf("=================\n");

		for (i = 0; j < 3; j++)
		{
			if (2 == i)
			{
				continue;
			}
			printf("********************\n");
			printf("j = %d, i = %d\n", j, i);
		}
	}

	return 0;
}

