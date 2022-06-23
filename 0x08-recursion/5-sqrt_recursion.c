#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: if no natural square root, return -1 else square root
 */
int _sqrt_recursion(int n)
{
	return (help(n, 1));
}
/**
 * help - function to solve sqrt_recursion
 * @c: number to determine if squareroot
 * @i: Incrementer to compare against c
 * Return: square root if natural number or -1 if none found
 */
int help(int c, int i)
{
	int square;

	square = i * i;

	if (square == c)

		return (i);
	else if (square < c)
		return (help(c, i + 1));
	else
		return (-1);
}
