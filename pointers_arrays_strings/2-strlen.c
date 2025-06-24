#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: the length of the string
 * This function calculates the length of a string by iterating through
 * each character until it reaches the null terminator.
 */

int _strlen(char *s)
{
	return (strlen(s));
}
