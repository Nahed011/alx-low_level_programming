#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (sussess)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a;)
	{
		puchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
