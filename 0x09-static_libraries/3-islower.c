#include "main.h"

/**
 * _islower - cheks for the lowercase
 * @c: cheks input of function3-islower.
 * Return: return 1 if 'c' is   lowercase
 *  return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
