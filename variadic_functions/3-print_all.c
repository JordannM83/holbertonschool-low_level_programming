#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>



void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *str;
va_list args;

va_start(args, format);

if (format == NULL || args == NULL)
	return;

while (format && format[i])
{
	str = va_arg(args, char *);
	if (format[i])
	{

	}
	else if ()
	{
		
	}
	else if (args == NULL && format[i] == "s")
	{
		printf("(nil)");
	}
	else if (format[i] == "s")
	{
		printf("%s", format[i])
	}
	i++;
}

va_end(args);
printf('\n');
}
