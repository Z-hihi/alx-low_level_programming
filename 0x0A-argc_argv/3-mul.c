#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - convert str to int
 * @s: string
 * Return: return integer
 */
int _atoi(char *s)
{
	int num = atoi(s);

	return (num);
}
/**
 * main - multplie two nunmbers
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc > 3 || argc < 3)
	{
		printf("Eroor\n");
		return (1);
	}
	else
	{
		result = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
}
