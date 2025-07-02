#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all positive numbers passed as command line arguments
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1;
	int result = 0;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *p = argv[i];
		int j = 0;

		while (p[j])
		{
			if (p[j] < '0' || p[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num1 = atoi(argv[i]);
		result += num1;
	}
	printf("%d\n", result);
	return (0);
}
