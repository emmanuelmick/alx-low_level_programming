#include <stdio.h>

/** 
 * main - prints all possible different combinations of three digits.
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
			if (m > n && j > n)
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

