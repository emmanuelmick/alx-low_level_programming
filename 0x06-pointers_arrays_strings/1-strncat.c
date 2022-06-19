#include "main.h"
#include <string.h>
/**
 *_strncat - A function that concatenate two given string
 * and append some character.
 * @dest: parameter1
 * @src: parameter2
 * @n: parameter3
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
		{
			dest[i] = src[j];
		}
		return (dest);
}
