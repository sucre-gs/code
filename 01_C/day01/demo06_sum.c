#include <stdio.h>

int main(void)
{
	int num = 512;
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int sum = 0;

	printf("n1 = %d\n", num % 10);
	printf("n2 = %d\n", num % 100 / 10);
	printf("n2 = %d\n", num / 100);

	sum = num % 10 + num % 100 / 10 + num / 100;

	printf("sum = %d\n", sum);

	return 0;
}
