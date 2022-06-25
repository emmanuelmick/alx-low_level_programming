#include "main.h"
#include <stdio.h>

/**
 * main - A function that adds two numbers
 * @argc: Parameter1
 * @argv: Parameter2
 * Return: result
 */
int main(int argc, char *argv[])
{
	int result, num1, i, j, k;

	if (argc == 1)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0')
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	for (k = 0; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
