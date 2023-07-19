#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f: printing function pointer
 * @name: string name
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
