#include <stdio.h>

int main(void)
{
	int a[5] = {0};
	int i = 0;
	int len = sizeof(a) / sizeof(a[0]);

	for (i = 0; i < len; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < len; i++)
	{
		printf("%d\n", a[i]);
	}

	return 0;
}
