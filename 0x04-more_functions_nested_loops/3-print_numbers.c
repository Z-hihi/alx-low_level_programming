#include "main.h"
/**
 * print_numbers - print 0 to 9 only using _putchar
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int m = 0;

	do {
		_putchar(m + 48);
		m++;
	} while (m >= 0 && m <= 9);
	_putchar('\n');
}
