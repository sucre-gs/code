#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 10)
	{
		sum += i;
		i++;
		printf("sum = %d, i = %d\n", sum, i);
	}

	return 0;
}
