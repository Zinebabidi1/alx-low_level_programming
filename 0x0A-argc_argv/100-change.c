#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: int
 * @argv: array
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int p, t, c, a;
	int coins[] = {25, 10, 5, 2, 1};

	p = t = c = a = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	t = atoi(argv[1]);

	if (t <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[p] != '\0')
	{
		if (t >= coins[p])
		{
			a = (t / coins[p]);
			c += a;
			t -= coins[p] * a;
		}

		p++;
	}

	printf("%d\n", c);
	return (0);


}
