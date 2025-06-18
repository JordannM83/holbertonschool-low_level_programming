#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints "_putchar" followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

for (i = 0; str[i]; i++)
{
	putchar(str[i]);
}
putchar('\n');
return (0);
}