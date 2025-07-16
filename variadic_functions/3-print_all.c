#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - prints a char
 * @args: va_list of arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: va_list of arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list of arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list of arguments
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j;
	va_list args;
	char *separator = "";
	char types[] = "cifs";
	void (*funcs[])(va_list) = {print_char, print_int, print_float, print_string};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (types[j])
		{
			if (format[i] == types[j])
			{
				printf("%s", separator);
				separator = ", ";
				funcs[j](args);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
