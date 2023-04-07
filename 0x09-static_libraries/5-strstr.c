#include "main.h"
/**
 * _strstr - Entry pointer
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int  i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && haystack[i] == needle[j])
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}

