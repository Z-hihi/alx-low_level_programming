#include "main.h"
/**
 * _strdup - copies a string given as a parametre
 * @str: string input
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *duplicate;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);
	while (str[j])
		j++;
	duplicate = malloc(sizeof(char) * (j + 1));

	if (duplicate == NULL)
		return (NULL);
	while ((duplicate[i] = str[i]) != '\0')
		i++;
	return (duplicate);
}
