#include "main.h"
/**
 * puts2 - print every other character
 * @str: string
 * Return: string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
