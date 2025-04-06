#include <stdio.h>

int main(void)
{
	int num = 0;

	while (1)
	{
		scanf("%d", &num);
		if (0 == num)
		{
			break;
		}
	}

	return 0;
}
