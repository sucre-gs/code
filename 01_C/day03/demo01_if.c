#include <stdio.h>

int main(void)
{
	int num = 0;

	scanf("%d", &num);

	if (num >= 0 && num <= 100)
	{
		printf("yes\n");
	}
	else
	{	
		puts("no");
	}

	return 0;
}
