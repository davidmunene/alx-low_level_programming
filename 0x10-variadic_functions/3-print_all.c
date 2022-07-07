#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: string format
 * Return:void
 */
void print_all(const char * const format, ...)
{
	int k = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					k++;
					continue;
			}
			sep = ", ";
			k++;
		}
	}

	printf("\n");
	va_end(list);
}
