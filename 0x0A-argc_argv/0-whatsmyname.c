#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _printname - A function that prints the name of a program and a new line
 * @argc: argument count
 * @argv: A string of characters
 * Return: Always 0
 */
int _printname(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
