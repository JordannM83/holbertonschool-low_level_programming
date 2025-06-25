#include "main.h"
#include <stdio.h>



void puts_half(char *str)
{
	int len = 0;
	int i;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
	{
		len = (len + 1) / 2;
	}
	else
	{
		len = len / 2;
	}
	for (i = len; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
