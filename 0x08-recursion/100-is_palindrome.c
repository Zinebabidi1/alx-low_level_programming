#include "main.h"

/**
 * li - return the last index
 * @s: poin
 * Return: int
*/

int is_palindrome(char *s);
int c(char *s, int st, int e, int m);
int li(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += li(s + 1) + 1;

	return (n);
}


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: input
 * Return: 1 or 0
*/

int is_palindrome(char *s)
{
	int e = li(s);

	return (c(s, 0, e - 1, e % 2));
}

/**
 * c - checker
 * @s: string
 * @st: int to move
 * @e: int to move
 * @m: input
 * Return: 0 or 1
*/


int c(char *s, int st, int e, int m)
{
	if ((st == e && m != 0) || (st == e + 1 && m == 0))
		return (1);
	else if (s[st] != s[e])
		return (0);
	else
		return (c(s, st + 1, e - 1, m));
}







