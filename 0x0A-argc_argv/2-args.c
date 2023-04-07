#include <stdio.h>
#include "main.h"

/**
 * main -  prints all arguments it receives.
 * @argc: int
 * @argv: array
 * Return: always 0
*/

int main(int argc, char *argv[])
{

	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
return (0);
}
