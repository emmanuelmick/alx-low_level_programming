#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
int n;
int j;
for (n = 48; n <= 57; n++)
{
	for (j = 49; j <= 57; j++)
	{
		if (n > j)
		{
			putchar(n);
			putchar(j);
		
			if (n != 56 || j != 57)
			{
				putchar(44);
				putchar(32);
			}
		}	
	}
}
putchar(10);
return (0);
}
