#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a[5] = {0};
	int i = 0;
	int len = sizeof(a) / sizeof(a[0]);
	int min = 0;
	int temp = 0;
	int j = 0;

	srand(time(NULL));

	for (i = 0; i < len; i++)
	{
		a[i] = rand() % 100;
	}

	printf("排序前：\n");
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	//选择排序
	for (j = 0; j < len - 1; j++)
	{
		min = j;
		for (i = j + 1; i < len; i++)
		{
			if (a[i] < a[min])
			{
				min = i;
			}
		}

		if (min != j)
		{
			temp = a[min];
			a[min] = a[j];
			a[j] = temp;
		}
	}

	printf("排序后：");
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
