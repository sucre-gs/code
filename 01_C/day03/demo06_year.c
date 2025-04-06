#include <stdio.h>

int main(void)
{
	int y = 0;

	scanf("%d", &y);

	if ((0 == y % 4 && y % 100 != 0) || (0 == y % 400))
	{
		printf("leap year\n");
	}
	else
	{
		printf("not leap year\n");
	}

	return 0;
}
