#include <stdio.h>

/**
 * main - print all single digit number in base 10 starting from zero
 * Return: Always 0
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
	putchar(ch);
}
putchar(10);
return (0);
}
