#include <stdio.h>

/**
 * main - prints all lowercase characters except e and q
 * Return: Always 0
 */
int main(void)
{
for (char c = 'a'; c <= 'z'; c++)
{
	if (c != 'e' && c != 'q')
	{
		putchar(c);
	}
}
putchar(10);
return (0);
}
