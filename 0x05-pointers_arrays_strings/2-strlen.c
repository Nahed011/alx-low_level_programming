#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string input
 *
 * Return: length of string
*/
int _strlen(char *s)
{
	int counter;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}
