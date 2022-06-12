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
char c;
for (c = 'A'; c <= 'Z';c++)
{
	putchar(c);
}
putchar(10);
return (0);
}
