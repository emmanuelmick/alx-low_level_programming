#include <stdio.h>

/** 
 * main - prnts all three possible different combinations of three digit.
 * Return: Always 0
 */
int main(void)
{
int n;
int m;
int j;
for (n = 48; n <= 57; n++)
{
	for (m = 49; m <= 57; m++)
	{
		for (j = 50; j <= 57; j++)
		{
			if (m > n && j > m)
			{
				putchar(n);
				putchar(m);
				putchar(j);
				if (n != 55 || m != 56 || j != 57)
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
}

