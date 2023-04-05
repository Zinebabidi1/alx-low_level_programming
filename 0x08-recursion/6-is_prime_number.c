#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: intput
 * @on: int
 * Return: integer
*/

int cp(int n, int on);
int is_prime_number(int n)
{
	return (cp(n, 2));
}

/**
 * cp - check all the num < n
 * @n: input
 * @on: inputkjhk
 * Return: innt
*/

int cp(int n, int on)
{
	if (on >= n && n > 1)
		return (1);
	else if (n % on == 0 || n <= 1)
		return (0);
	else
		return (cp(n, on + 1));
}
