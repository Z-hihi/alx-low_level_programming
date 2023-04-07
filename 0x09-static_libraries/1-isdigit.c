#include "main.h"

/**
 * _isdigit - cheks c is ddigit
 * @c: input
 * Return: 1 is digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
