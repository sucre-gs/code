#include <stdio.h>

int main(void)
{
	int a[5] = {0};
	int i = 0;
	int len = sizeof(a) / sizeof(a[0]);
	int max = 0;
	int min = 0;

	for (i = 0; i < len; i++)
	{
		scanf("%d", &a[i]);
	}

	max = a[0];
	for (i = 1; i < len; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	min = a[0];
	for (i = 0; i < len; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}

	printf("max = %d, min = %d\n", max, min);

	return 0;
}
