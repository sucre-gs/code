#include <stdio.h>

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	
	double d1 = 0;
	double d2 = 0;

	char c1 = 0;
	char c2 = 0;

	scanf("%c %c", &c1, &c2);
	printf("c1: %c; c2: %c\n", c1, c2);

	printf("=============================\n");
	scanf("%d %lf", &num1, &d1);
	printf("num1 = %d; d1 = %f\n", num1, d1);
	printf("=============================\n");

	return 0;
}
