#include <stdio.h>

int main(void)
{
	char ch[32] = {"hello world"};

	puts("hello world");
	puts(ch);
	printf("%s\n", "hello world");
	printf("%s\n", ch);

	return 0;
}
