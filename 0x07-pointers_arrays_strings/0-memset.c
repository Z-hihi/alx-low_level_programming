#include "main.h"

/**
 * _memset - fill memory with a costant byte
 * @s: pointer to put constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > n; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
