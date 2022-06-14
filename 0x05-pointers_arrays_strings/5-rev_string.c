#include "main.h"
#include <string.h>

/**
 * rev_string - A function which reverses an array of string
 *@s: parameter used in the function
 */
void rev_string(char *s)
{
	char tmp;
	int i, len1, len2;

	len1 = 0;
	len2 = 0;
	while (s[len1] != '\0')
		len1++;
	len2 = len1 - 1;
	for (i = 0; i < len1; i++)
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2] = tmp;
		len2 -= 1;
	}
}
