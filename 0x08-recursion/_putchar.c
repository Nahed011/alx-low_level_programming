#include <unistd.h>

/**
 * _putchar - write the character c to stout
 * @c: character to print
 * Return: On success 1
 * On error -1 is returned
*/

int_putchar(char c)
{
	return (write(1, &c, 1));
}
