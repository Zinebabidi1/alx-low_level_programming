#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input
 * @v: input
 * Return: the natural square root of a number.
*/

int sq(int n, int v);
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}

/**
 * sq - square root
 * @n: input
 * @v: input
 * Return: int
*/

int sq(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (sq(n, v + 1));
	else
		return (-1);
}
