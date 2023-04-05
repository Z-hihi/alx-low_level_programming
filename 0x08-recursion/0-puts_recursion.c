#include "main.h"
/**
 * _puts_recursion - print srting using recursion
 * @s: input string
 * Retunr: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
