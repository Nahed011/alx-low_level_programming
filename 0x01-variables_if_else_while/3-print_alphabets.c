#include <stdio.h>

/**
 * main - Entry point
 *
 * Desscription: prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - Z*/
	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
