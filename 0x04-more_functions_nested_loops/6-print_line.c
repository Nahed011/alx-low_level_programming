#include "main.h"

/*
 * print_line - prints a straight line
 *
 * @n: is the number of times the _ character should be printed
*/

void print_line(int n)
{
	int lnchr;

	if (num <= 0)
		_putchar('\n');
	else
	{
		for (lnchr = 1; lnchr <= n; lnchr++)
			_putchar('_');
		_putchar('\n');
	}
}
