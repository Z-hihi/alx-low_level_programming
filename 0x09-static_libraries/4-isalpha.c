#include "main.h"

/**
 * _isalpha - cheks the input is caractere
 *
 * @c: input of function
 * Return: 1 if c true 0 else
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
