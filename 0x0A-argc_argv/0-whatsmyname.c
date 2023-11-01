#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of a program
 * @argc: numbers of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
