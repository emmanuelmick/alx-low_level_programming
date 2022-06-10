#include <stdio.h>

/**
 * main - Prints the lowercase characters in reverse
 * Return: Always 0
 */
int main(void)
{
for (char ch = 'z'; ch >= 'a'; ch--)
{
	putchar(ch);
}
putchar(10);
return (0);
}
