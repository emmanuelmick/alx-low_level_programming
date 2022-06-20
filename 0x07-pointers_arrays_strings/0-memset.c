#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: input pointer to type char
 * @b: input variable of type char
 * @n: unsigned int variable(number of byte to be filled)
 *Return: A pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
