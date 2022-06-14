#includee "main.h"

/**
 * print_rev - A function that prints a given string in reverse
 * @s: The string tto be printed in reverse
 */
void print_rev(char *s)
{
	int i;
	int n;
	
	n = strlen(s);
	for (i = n -1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
