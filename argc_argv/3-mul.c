#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed as command line arguments
 * @argv: number of command line arguments
 * @argc: array of command line arguments
 * Return: Always 0.
 */

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
