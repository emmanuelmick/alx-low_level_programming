#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: A string copied from source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
