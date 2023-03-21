#include "main.h"

/**
 *  _islower - check the lowercase
 *  @c: checks input of func
 *  Return: 1 if c is lowercase
 *  otherwise 0 success
*/

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

