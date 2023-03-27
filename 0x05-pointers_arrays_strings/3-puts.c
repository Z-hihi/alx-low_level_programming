#include "main.h"
/**
 * _puts - print a string to stdout
 * @str: string
 * Return: lenght of string
 */
void _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
