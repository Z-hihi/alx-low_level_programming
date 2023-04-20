#include "variadic_functions.h"

/**
 * print_all - print all
 * @format: list type of argument
 * @...: type of argument to print
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *str = NULL;
       char *sep = "";

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 's':
					printf("%s", va_arg(ap, char *));
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
