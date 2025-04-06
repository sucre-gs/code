#include <stdio.h>

int main(void)
{
	char ch = 'A';
	int ret = 0;

	ret = putchar('a');
	putchar('\n');
	
	printf("ret = %d\n", ret);

	putchar('a' - 32);
	putchar(ch + 32);
	putchar(97);
	putchar(65);

	return 0;
}
