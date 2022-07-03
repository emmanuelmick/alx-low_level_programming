#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars.
 * and initializes it with a specific char.
 * @size: Size of array
 * @c: Character with which the array is initialized.
 * Return: A pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
