#include "main.h"
/**
 * print_line - print a staight line
 * @n: number of time - character
 * Return: Always 0
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (m = 1; m <= n; m++)
			_putchar('-');
		_putchar('\n');
	}
}
