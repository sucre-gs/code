#include <stdio.h>

int main(void)
{
	int m = 1;
	int n = 10;
	int val = 1;
	int i = 0;

	scanf("%d%d", &m, &n);

	while (i < n)
	{
		val *= m;
		i++;
		printf("val = %d, i = %d\n", val, i);		
	}

	return 0;
}
