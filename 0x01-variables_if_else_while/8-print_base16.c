#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
	putchar(i);
}
for (char c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar(10);
return (0);
}
