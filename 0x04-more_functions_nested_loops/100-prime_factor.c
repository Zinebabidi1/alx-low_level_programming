#include "main.h"

/**
 * _sqrt - finds the square root
 * @x: input number
 * Return: square root of x
*/

double _sqrt(double x)
{
	float s, t;

	s = x / 2;
	t = 0;

	while (s != t)
	{
		t = s;
		s = (x / t + t) / 2;
	}
	return (s);
}

/**
 * largest_prime_factor - finds and prints the largest
 * prime fac of num
 * @num: number to find
*/
void largest_prime_factor(long int num)
{
	int p, l;

	while (num % 2 == 0)
		num = num / 2;

	for (p = 3; p <= _sqrt(num); p += 2)
	{
		while (num % p == 0)
		{
			num = num / p;
			l = p;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", l);
}

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143
 * Return: 0 success
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
