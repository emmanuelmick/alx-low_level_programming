#include "main.h"
#include <stdio.h>
/**
 * print_array - A function that prints a given array of numbers
 * in the order of which they are stored
 * @a: the given parameter1
 * @n: the given parameter2
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d", a[i]);
putchar(10);
}
