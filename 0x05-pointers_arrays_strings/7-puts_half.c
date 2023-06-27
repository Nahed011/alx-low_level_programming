#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: char array string type
 *
 * Description: If the number of characters is odd, print the last n
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
		;

	i++
		for (i /= 2; str[i] != '\n'; i++)
		{
			_putchar(str[i]);
		}
}