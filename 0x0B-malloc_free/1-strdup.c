#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: NULL
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	/* +1 puts the end of string character on the size*/
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	if else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
