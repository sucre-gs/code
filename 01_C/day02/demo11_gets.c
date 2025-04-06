#include <stdio.h>

int main(void)
{
	char str[32] = {0};

	gets(str); //~ scanf("%s", str);

	printf("str: %s\n", str);

	return 0;
}
