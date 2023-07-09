#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *
 * @s: string to print
 *
 * Return: nothing
*/

void _puts(char *s)
{
	int _putchar(char c);
	while (*s != '\0')
	{
		_putchar(*s + 48);
		s++;
	}
	_putchar('\n');
}
