#include "main.h"
/**
 * _strncat - concatenate two strings
 * @n: lenght of string
 * @src: pointer to source input
 * @dest: pointer to destination input
 * Return: result dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; j < n && src[i] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
