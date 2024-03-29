#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: name to print
 * @f: function pointer to call
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
