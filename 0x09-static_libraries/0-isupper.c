#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: input for alphabet
 * Return: 1 if c is uppercase
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
