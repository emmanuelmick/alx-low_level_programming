#include "main.h"
#include <string.h>

/**
 * puts_half - A function that prints half a string , followed by a new line
 * @str: parameter of the given function
 */
void puts_half(char *str)
{
	int i, n, p;

	n = strlen(str);
	if (n % 2 == 1)
		p = (n - 1) / 2;
	else
		p = n / 2;
	for (i = p; i < n; i++)
		_putchar(str[i]);
	_putchar('\n');
}
