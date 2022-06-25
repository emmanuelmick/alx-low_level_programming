#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints all the argument it receives
 * @argc: Argument counter
 * @argv: Array of string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
