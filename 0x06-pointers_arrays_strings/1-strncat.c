#include "main.h"

/**
 * *_strncat -  that concatenates two strings.
 * @dest: input
 * @src: input
 * @n: input
 * Description: it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
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
