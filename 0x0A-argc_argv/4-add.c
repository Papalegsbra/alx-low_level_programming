#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string represents a positive number
 * @str: The string to check
 * Return: 1 if it's a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	if (*str == '\0')
		return (0);

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
 * main - Adds positive numbers passed as command-line arguments
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 if successful, 1 if there's an error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
