#include <stdio.h>

int main(void)
{
	int a[5] = {0};
	int i = 0;
	int j = 0;
	int temp = 0;
	int len = sizeof(a) / sizeof(a[0]);

	for (i = 0; i < len; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("排序前：");
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	puts("");

	for (j = 0; j < len - 1; j++)
	{
		for(i = 0; i < len - 1 - j; i++)
		{
			if (a[i] > a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}

	printf("排序后：");
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	puts("");

	return 0;
}
