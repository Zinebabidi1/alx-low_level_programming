#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: input
 * @b: input
 * @n: input
 * Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
		s[i] = b;

	return (s);
}
