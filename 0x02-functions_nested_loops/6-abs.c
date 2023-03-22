#include "main.h"

/**
 * _abs - compute the absolute integer value
 * @n: take an integer type input
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
