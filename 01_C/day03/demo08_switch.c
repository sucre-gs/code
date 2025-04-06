#include <stdio.h>

int main(void)
{
	int num = 0;

	scanf("%d", &num);

	switch (num / 10)
	{
		case 10: puts("A");	break;
		case 9: puts("B");	break;
		case 8: puts("C");	break;
		case 7: puts("D");	break;
		case 6: puts("E");	break;
		default:
				printf("my god\n");
	}

	return 0;
}
