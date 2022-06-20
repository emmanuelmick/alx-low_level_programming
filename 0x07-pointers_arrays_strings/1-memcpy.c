#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: A pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest +  i) = src;
		i++;
	}
	return (dest);
}
