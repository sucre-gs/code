#include <stdio.h>

int main(void)
{
	int sum = 0;
	int i = 0;

	do
	{
		printf("sum = %d, i = %d\n", sum, i);
		sum += i++;
	}while(i < 10);

	return 0;
}
