#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns a random number to the variable n each time it is executed.
 * prints out the last digit of the number stored in the variable n.
 * Return: Always 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d is %d ", n, n % 10);
if (n > 5)
{
	printf("and is greater than 5");
}
else if (n == 0)
{
	printf("and is 0");
}
else if (n < 6 && n != 0)
{
	printf("less than 6 and not 0");
}
printf("\n");

return (0);
}
