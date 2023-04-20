#include "variadic_functions.h"

/**
 * print_all - print all
 * @format: list type of argument
 * @...: type of argument to print
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, c = 0;
	va_list ap;
	char *str = NULL;
	const char t_arg[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(",");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double)), c = 1;
			break;
		case 's':
			printf("%s", va_arg(ap, char *)), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			} i++;
		}
		printf("\n"), va_end(ap);
	}
}

