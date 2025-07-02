#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[])
{
	if (argv == 3)
	{
	int num1 = atoi(argc[1]);
	int num2 = atoi(argc[2]);
	int result = num1 * num2;

	printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}