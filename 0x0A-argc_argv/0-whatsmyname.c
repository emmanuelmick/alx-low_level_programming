#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints the name of a program and a new line
 * @argc: argument count
 * @argv: A string of characters
 * Return: Always 0
 */
int main(int argc __attribute ((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
