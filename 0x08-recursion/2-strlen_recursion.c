#include "main.h"
/**
 * _strlen_recursion - return lenght of a string
 * @s: input
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
