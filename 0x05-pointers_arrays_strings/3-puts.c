#include "main.h"

/**
 * _puts - A function that prints a string followed by a new line
 * @str: The parameter declared in the function
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
