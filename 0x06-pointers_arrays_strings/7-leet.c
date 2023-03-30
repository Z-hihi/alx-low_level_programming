#include "main.h"
/**
 * leet - encode a string into 1337
 * @s: string
 * Return:string
 */
char *leet(char *s)
{
	unsigned int i;
	char *st = s;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};

	while (*s)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*s == key[i] || *s == key[i] + 32)
			{
				*s = 48 + value[i];
			}
		}
		s++;
	}
	return (st);
}


