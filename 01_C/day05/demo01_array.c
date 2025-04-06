#include <stdio.h>

int main(void)
{
	int a[2][3] = {{1, 2}, {3, 4}};
	int i = 0;
	int j = 0;

	printf("===============\n");
	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < 3; i++)
		{
			printf("%d %d: %d\n", j , i, a[j][i]);
		}
		printf("\n");
	}
	printf("===============\n");

	printf("a[0][0] = %d\n", a[0][0]);
	printf("a[0][1] = %d\n", a[0][1]);
	printf("a[0][2] = %d\n", a[0][2]);
	printf("a[1][0] = %d\n", a[1][0]);
	printf("a[1][1] = %d\n", a[1][1]);
	printf("a[1][2] = %d\n", a[1][2]);

	return 0;
}
