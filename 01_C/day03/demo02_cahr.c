#include <stdio.h>

int main(void)
{
	char ch = 0;

	ch = getchar();

	if (ch >= 'a' && ch <= 'z')
	{
		puts("yes");
	}
	else
	{
		printf("no\n");
	}

	return 0;
}
