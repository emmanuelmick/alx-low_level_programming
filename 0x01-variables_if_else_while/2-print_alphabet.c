#include <stdio.h>
#include <string.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
putchar(10);
return (0);
}
