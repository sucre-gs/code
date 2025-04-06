#include <stdio.h>

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int temp = 0;

	scanf("%d%d", &num1, &num2);

	if (num1 < num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	printf("max: %d\n", num1);

	scanf("%d%d", &num1, &num2);
	
	temp = (num1 < num2) ? num2 : num1;

	printf("max: %d\n", temp);

	return 0;
}
