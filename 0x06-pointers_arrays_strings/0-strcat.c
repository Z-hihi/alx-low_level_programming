#include "main.h"
/**
 * _strcat - concatenate two stings
 * @src: pointer to source input
 * @dest: pointer to destination input
 * Return: result string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	return (dest);
}
