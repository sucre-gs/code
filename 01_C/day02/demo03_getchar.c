#include <stdio.h>

int main(void)
{
	char ch = 0;

	ch = getchar();
	ch -= 32;

	putchar(ch);
	putchar('\n');
	puts("");

	return 0;
}
