#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sume of diag
 * @a: array
 * @size: size of array
 * Return: sume
 */
void print_diagsums(int *a, int size)
{
	int s1, s2, i;

	s1 = 0;
	s2 = 0;
	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
