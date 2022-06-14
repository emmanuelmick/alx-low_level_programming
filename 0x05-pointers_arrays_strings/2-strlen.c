#include "main.h"
#include <string.h>
/**
 * _strlen - A function that prints the lenght of a given string
 * @s: string pointer passed to the given function
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int lenght;

	for (; *s != '\0'; s++)
	{
		lenght += 1;
	}
	return (_strlen(s));
}
