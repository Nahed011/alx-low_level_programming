#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of arguments
 * @separator: string separator
 * @...: string to print
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
