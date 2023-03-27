#include "main.h"
/**
 * _strlen - lenght of character
 * @s: input character
 * Return: 0
 */
int _strlen(char *s)
{
	int l = 0;

	for (; *s++;)
		l++;
	return (l);
}
