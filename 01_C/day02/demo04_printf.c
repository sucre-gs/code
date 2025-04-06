#include <stdio.h>

int main(void)
{
	int ret = 0;
	int num = 512;
	double f = 512211;

	printf("zhangsan says:\"good good study\".\n");
	printf("num = %d\n", num);
	printf("num = %#o\n", num);
	printf("num = %#x\n", num);
	printf("num = %#X\n", num);
	printf("num = %#X%%\n", num);
	printf("f = %e\n", f);
	printf("f = %E\n", f);
	printf("ret = %d; num = %d; f = %f\n", ret, num, f);

	return 0;
}
