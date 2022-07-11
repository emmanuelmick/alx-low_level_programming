#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - A function that prints anything
 * @format: The list of types of arguments passed to the function
 * Return: Values passed
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *string;
	int i;

	i = 0;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'c':
				printf("%c", (char)va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				string = va_arg(list, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		|| format[i] == 's') && format[(i + 1)] != '\0')
			printf(",");
		i++;
	}
	printf("\n");
	va_end(list);
}
