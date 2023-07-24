#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n: number of arguments
 * @...: integers to sum
 * Return: integer sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}