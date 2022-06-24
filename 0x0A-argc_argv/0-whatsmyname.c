#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _printname - A function that prints the name of a program and a new line
 * @argc - Argument count
 * @argv - array of strings
 * Return: The name of the program
 */
int _printname(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("The name of the program is argv[%s]", argv[i]);
	}
	return (0);
}
