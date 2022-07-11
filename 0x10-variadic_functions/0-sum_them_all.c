#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all -  A function that returns the sum of all its parameters
 * @n: Unsigned int
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	va_start(list, n);
	if (n == 0)
		return (0);
	for (int i = 1; i <= n; i++)
		int sum += va_arg(list, int);
	va_end(list);
	return (sum);
}

