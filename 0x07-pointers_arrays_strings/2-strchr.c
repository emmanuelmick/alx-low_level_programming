#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: source string
 * @c: character to be located
 * Return: A pointer to the first occurence of the character in the string.
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}
