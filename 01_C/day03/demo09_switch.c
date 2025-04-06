#include <stdio.h>

int main(void)
{
	int num1 = 0;
	int num2 = 0;

	scanf("%d%d", &num1, &num2);

	switch (num1)
	{
		case 1:switch(num2)
			   {
				   case 1:printf("A\n"); break;
				   default:
						  printf("no\n");
			   }
			   break;
		default:
			   printf("no\n");
	}

	return 0;
}
