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
	strncat(dest, src, n);
	return (dest);
}
