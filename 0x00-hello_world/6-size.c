#include <stdio.h>
/**
 * main - print a size of various types
 *
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %d bytes(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %d  bytes(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %d bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %d bytes(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %d bytes(s)\n", (unsigned long)sizeof(f));
}

