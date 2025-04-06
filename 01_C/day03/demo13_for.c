#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;

	for (i = 0; i < 1000; i++)
	{
		if (1 == i % 2 && 1 == i % 3 && 1 == i % 5)
		{
			sum += i;
			printf("i = %d\n", i);
		}
	}

	printf("sum = %d\n", sum);
	
	return 0;
}
