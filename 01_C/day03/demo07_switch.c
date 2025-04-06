#include <stdio.h>

int main(void)
{
	int num = 0;

	scanf("%d", &num);

	switch (num)
	{
		case 1: printf("one\n"); break;
		case 2: printf("two\n"); break;
		case 3: printf("three\n"); break;
		case 4: printf("four\n"); break;
		default:
				printf("no\n");
	}

	return 0;
}
