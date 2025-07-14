#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using the function pointer f
 * @name: name of the person
 * @f: function pointer to a function that takes a char pointer
 *       and returns void
 */

void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
    {
        f(name);
    }
}
