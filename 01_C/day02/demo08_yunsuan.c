#include <stdio.h>

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	double f = 0;

	printf("input:\n");
	scanf("%d%d", &num1, &num2);

	f = num1 / (double)num2;

	printf("add: %d\n", num1 + num2);
	printf("sub: %d\n", num1 - num2);
	printf("mul: %d\n", num1 * num2);
	printf("div: %d\n", num1 / num2);

	return 0;
}
