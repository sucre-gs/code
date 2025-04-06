#include <stdio.h>

int main(void)
{
	int num1 = 123;
	int num2 = 12331244;
	double num3 = 44.8931;

	printf("money: %010dRMB\n", num1);
	printf("money: %-10dRMB\n", num1);
	printf("money: %010dRMB\n", num2);
	printf("money: %1.20fRMB\n", num3);

	return 0;
}
