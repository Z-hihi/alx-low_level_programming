#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - add all arrument
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Eroor\n"), 1);
	sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
