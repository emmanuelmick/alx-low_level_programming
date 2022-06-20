#include "main.h"
#include <string.h>
/**
 * _strlen - A function that prints the lenght of a given string
 * @s: string pointer passed to the given function
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
		return len + 1;
	}
}
