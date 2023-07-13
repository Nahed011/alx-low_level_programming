#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @b: constant
 * @s: pointer
 * @n: max bytes to use
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *pyr = s;

	while (n--)
		*s++ = b;
	return (s);
}

/**
 * *_calloc - allocates memory for an array, using malloc
 * @size: size of element
 * @nmemb: array length
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
