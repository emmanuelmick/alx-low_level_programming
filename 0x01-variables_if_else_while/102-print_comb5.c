#include <stdio.h>

/**
 * main - prints all possible combinations of two-two digits.
 * Return: Always 0
 */
int main (void)
{
int n;
int m;
for (n = 48; n <= 57; n++)
{
	for (m = 48; m <= 57; m++)
	{
		putchar(n);
		putchar(m);
		if (n != 57 || m != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
}
putchar(10);
return (0);
}
