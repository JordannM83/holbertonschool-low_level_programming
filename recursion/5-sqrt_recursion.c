#include "main.h"
#include <stdio.h>

/**
 * _sqrt_helper - helper function to find the square root
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 * Return: the square root of n, or -1 if it does not have a natural
 */

int _sqrt_helper(int n, int guess)
{
	if (n == guess * guess)
	{
		return (guess);
	}
	else if (guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1));
	}
}
