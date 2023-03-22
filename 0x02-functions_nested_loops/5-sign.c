#include "main.h"

/**
 *print_sign - print the signe of input n
 * @n: the input of function
 * Return: 1 if greater than zero 0 else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else 
	{
		_putchar(48);
		return (0);
	}
}
