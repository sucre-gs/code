#include <stdio.h>

int main(void)
{
	char ch = 0;
	int num = 66;

	ch = num;

	printf("ch = %d\n", ch);
	printf("ch = %c\n", (char)ch);
	printf("ch = %c\n", ch);

	return 0;
}
