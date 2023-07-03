#include "main.h"

/**
 * _memcpy - copies memory area.
 * @n: length of src to be copied
 * @src: source
 * @dest:memory area
 * Returns a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
