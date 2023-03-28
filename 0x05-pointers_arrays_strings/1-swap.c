#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: int val
 * @b: int val
 * Return: 0 success
*/

void swap_int(int *a, int *b)
{
	int *c;
	*c = *a;
	*a = *b;
	*b = *c;
}
