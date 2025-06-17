#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This program generates a random number,
 * checks the last digit, and prints whether it is greater than 5,
 * less than 6 and not 0, or 0.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	return (0);
}