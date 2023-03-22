#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: take an integer type inpute
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = (-1) * (n % 10);
	else
		lastdigit = n % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
