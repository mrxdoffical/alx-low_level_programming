#include"function_pointers.h"


/**
 * print_name - prints name
 * @name: input
 * @f: input
 * Return nothing
 */
void print_name(char *name, void (*f)(char *))
{
		if (name && f)
		f(name);
}
