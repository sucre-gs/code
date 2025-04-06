#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;

loop:
	sum += i;
	printf("sum = %d, i = %d\n", sum, i);

	if (i++ < 101)
	{
		goto loop;
	}

	return 0;
}

