#include <stdio.h>

int main(void)
{
	int num = 0;

	scanf("%d", &num);

	if (1 == num % 2)
	{
		printf("jishu\n");
	}
	else
	{
		puts("oushu");
	}
}
