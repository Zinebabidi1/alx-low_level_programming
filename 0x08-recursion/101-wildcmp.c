#include "main.h"

/**
 * m - iterater past ast
 * @s2: input
 * Return: the pointer past st
*/

char *m(char *s2)
{
	if (*s2 == '*')
		return (m(s2 + 1));
	else
		return (s2);
}

/**
 * i - makes reality
 * @s1: char
 * @s2: char
 * Return: 1 or 0
*/

int i(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += i(s1 + 1, s2)
		return (r);
}


/**
 * wildcmp - compares two strings
 * @s1: input
 * @s2: input
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0
*/

int wildcmp(char *s1, char *s2)
{
	int r1 = 0;

	if (!*s1 && *s2 == '*' && !*m(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = m(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			r1 += wildcmp(s1 + 1, s2 + 1);
		r1 += i(s1, s2);
		return (!!r1);
	}
	return (0);
}
