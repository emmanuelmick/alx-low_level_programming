#include <stdio.h>

/** 
 * main - prints all possible different combinations of three digits.
 * Return: Always 0
 */
int main(void)
{
int n;
int m,
int o;
for (n = 48; n <= 57; n++)
{
	for (m = 49; m <= 57; m++)
	{
		for (o = 50; o <= 57; o++)
		{
			if (m > n && o > n)
			{
				putchar(n);
				putchar(m);
				putchar(o);
				if (n != 55 || m != 56 || o != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
}
putchar(10);
return (0);


