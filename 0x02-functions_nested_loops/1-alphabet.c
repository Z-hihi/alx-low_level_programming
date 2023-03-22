#include "main.h"

/**
 * print_alphabet - print all alphabet  in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		_putchar(lettre);
	}
	_putchar('\n');

}
