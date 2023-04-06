#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input
 * Return: 0 Success
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		++c;

	return (c);
}
