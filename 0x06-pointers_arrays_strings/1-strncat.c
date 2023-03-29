#include "main.h"

/**
 * _strncat -  that concatenates two strings.
 * @dest: input
 * @src: input
 * @n: most number of bytes from @src
 * Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && scr[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);

}
