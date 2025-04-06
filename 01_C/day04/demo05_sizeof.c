#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char a[66] = {"1, 2, 3, 4, 5"};

	printf("sizeof = %ld\n", sizeof(a));
	printf("strlen = %ld\n", strlen(a));

	return 0;
}
