#include "main.h"
#include <string.h>

/**
 * *_strcat - A function that concatenate two strings
 * @dest: parameter for string1
 * @src: parameter for string2
 * Return: The concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = _strlen(dest);
	for (j = 0; dest[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
}
