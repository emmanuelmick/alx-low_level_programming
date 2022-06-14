#include "main.h"
#include <string.h>
/**
 * puts2 - A function that prints any other characte of a string
 * @str: parameter of the function
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}

