#include <stdio.h>

/**
 * main - prints lowercase and uppercase characters
 * Return: Always 0
 */
int main(void)
{
for (char c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
for (char j = 'A'; j <= 'Z'; j++)
{
	putchar(j);
}
putchar(10);
return (0);
}
