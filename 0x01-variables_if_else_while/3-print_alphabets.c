#include <stdio.h>

/**
 * main - prints lowercase and uppercase characters
 * Return: Always 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
char j;
for (j = 'A'; j <= 'Z'; j++)
{
	putchar(j);
}
putchar(10);
return (0);
}
