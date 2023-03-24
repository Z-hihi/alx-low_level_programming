#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: tne number items / charactere
 * Return: always 0
 */
void print_diagonal(int n)
{
	int pn, sp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pn = 1; pn <= n; pn++)
		{
			for (sp = 1; sp <= pn; sp++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
