#include <stdio.h>

int main(void)
{
	int num = 0;

	scanf("%d", &num);

	if (0 == num)
	{
		printf("quit\n");
	}
	else
	{
		printf("go on");
	}
}
