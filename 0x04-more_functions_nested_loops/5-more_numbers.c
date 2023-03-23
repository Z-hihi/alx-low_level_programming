#include "main.h"
/**
 * more_numbers - print 0 - 14
 * Return: Always 0
 */
void more_numbers(void)
{
	int m, n, c;

	for (m = 1; m <= 10; m++)
	{
		for (n = 0; n <= 14; n++)
			c = n;
		if (c > 9)
		{
			_putchar(1 + 48);
			c = n % 10;
		}
		_putchar(c + 48);
	}
	_putchar('\n');
}
