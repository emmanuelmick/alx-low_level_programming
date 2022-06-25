#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints the name of a program and a new line
 * @argc: Argument count
 * @argv: An array of command
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
