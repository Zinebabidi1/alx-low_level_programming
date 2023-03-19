#include <stdio.h>

/**
 * main - entry point
 * description: print 0 to 9 using putchar
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*conv digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
