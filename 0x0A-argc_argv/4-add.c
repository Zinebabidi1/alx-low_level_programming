#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * check_num -check str if it digit
 * @str: array
 * Return: 0
*/

int check_num(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))
	{
		if (!isdigit(str[c]))
			return (0);
		c++;
	}
	return (1);
}





/**
 * main - that adds positive numbers.
 * @argc: int
 * @argv: array
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int c;
	int s;
	int sum = 0;

	c = 1;

	while (c < argc)
	{
		if (check_num(argv[c]))
		{
			s = atoi(argv[c]);
			sum += s;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", sum);
	return (0);
}
