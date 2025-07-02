#include "main.h"
#include <stdio.h>

/**
 * _ipn_helper - helper function to check if a number is prime
 * @n: the number to check
 * @guess: the current guess for a factor of n
 * Return: 1 if n is prime, 0 otherwise
 */

int _ipn_helper(int n, int guess)
{
	if (n % guess == 0)
	{
		return (0);
	}
	else if (guess > (n / 2))
	{
		return (1);
	}
	else
	{
		return (_ipn_helper(n, guess + 1));
	}
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else if (n == 0 || n == 1)
	{
		return (0);
	}
	else
	{
		return (_ipn_helper(n, 2));
	}
}
