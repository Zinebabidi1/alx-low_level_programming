#include "main.h"

/**
 * print_sign - print the sign of number
 * @n: takes int typr input for func
 * Return: 1 +, 0 0, -1 -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)

	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
