#include <stdio.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	int i = 0;

	printf("===========================\n");
	printf("a[0] = %d\n", a[0]);
	printf("a[1] = %d\n", a[1]);
	printf("a[2] = %d\n", a[2]);
	printf("a[3] = %d\n", a[3]);
	printf("a[4] = %d\n", a[4]);
	printf("===========================\n");

	for (i = 0; i < 5; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}
