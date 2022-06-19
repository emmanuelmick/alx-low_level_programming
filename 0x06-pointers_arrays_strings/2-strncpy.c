#include "main.h"
#include <string.h>

/**
 *_strncpy - A function that copies a given string
 *@dest: parameter 1
 *@src: parameter 2
 *@n: parameter 3
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src , n);
	return (dest);
}

