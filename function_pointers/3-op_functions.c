#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: the operator passed as argument
 * Return: pointer to the function that corresponds to the operator given
 *         as a parameter, or NULL if no match is found.
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}
