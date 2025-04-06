#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	c = a++ && ++b;
	printf("c = %d\n", c);
	printf("a = %d, b = %d\n", a, b);

	c = ++a || b++;
	printf("c = %d\n", c);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}
