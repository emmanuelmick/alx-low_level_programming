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
	int i = 0;
	int j;
while (dest[i])
	i++;

for (j = 0; src[j] != 0; j++)
{
	dest[i] = src[j];
	i += 1;
}
	dest[i] = '\0';
	return (dest);
}
