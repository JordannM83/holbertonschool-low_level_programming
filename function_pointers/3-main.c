#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - performs simple operations
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 on success, or exits with an error code.
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *sign;
	int (*op_func)(int, int) = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = argv[2];

	if (strcmp(sign, "+") != 0 && strcmp(sign, "-") != 0
		&& strcmp(sign, "*") != 0 && strcmp(sign, "/") != 0
		&& strcmp(sign, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(sign, "/") == 0 || strcmp(sign, "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	op_func = get_op_func(sign);
	printf("%d\n", op_func(num1, num2));
	return (0);
}
