#include <stdio.h>

int main(void)
{
	int a[5] = {32, 64, 1, 2, 88};
	int len = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int temp = 0;

	for (i = 0; i < len / 2; i++)
	{
		temp = a[i];
		a[i] = a[len - 1 -i];
		a[len - 1 - i] = temp;
	}

	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}

	puts("");

	return 0;
}
