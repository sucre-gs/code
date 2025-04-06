#include <stdio.h>

int main(void)
{
	int a[50] = {0};
	int i = 0;
	int curlen = 0;
	int maxnum = 0;
	int minnum = 0;
	int sum = 0;
	
	while (1)
	{
		scanf("%d", &a[curlen]);

		if (-1 == a[curlen] || 50 == curlen)
		{
			break;
		}
		curlen++;
	}

	maxnum = a[0];
	minnum = a[0];	
	for (i = 0; i < curlen; i++)
	{
		if (a[i] > maxnum)
		{
			maxnum = a[i];
		}
		if (a[i] < minnum)
		{
			minnum = a[i];
		}
	}

	printf("maxnum = %d, minnum = %d\n", maxnum, minnum);

	for (i = 0; i < curlen; i++)
	{
		sum += a[i];
	}

	printf("sum = %d\n", sum);
	
	printf("%.2lf\n", (double)(sum - maxnum - minnum) / (double)(curlen - 2));

	return 0;
}
