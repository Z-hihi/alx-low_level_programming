#include "main.h"
#include <stdio.h>
/**
 * main - print number of argument
 * @argc:numbr of argument
 * @argv: array ogf argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
