#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints the number of argument received
 * @argc: argument counter
 * @argv: An array of string
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
