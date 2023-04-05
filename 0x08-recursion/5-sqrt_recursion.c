#include "main.h"
/**
 * _sqrt_recursion - calculate square root
 * @n: input integer
 * @i: square root
 * Return: result
 */
int square(int n, int i);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find a square root of number
 * @n: input
 * @i: square root
 * Return: int
 */
int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}
