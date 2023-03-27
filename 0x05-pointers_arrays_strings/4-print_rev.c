#include "main.h"
/**
 * print_rev - print string in rev
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int m, n;

	m = 0;
	while (s[m] != '\0')
		m++;
	for (n = m - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
