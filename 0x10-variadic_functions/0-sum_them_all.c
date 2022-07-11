#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  A function that returns the sum of all its parameters
 * @n: Unsigned int
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	va_start(list, n);
	if (n == 0)
		return (0);

	for (i = 1; i <= n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}

