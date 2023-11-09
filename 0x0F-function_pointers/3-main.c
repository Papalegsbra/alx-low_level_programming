#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - prints the result of simple operations
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int num1 = atoi(argv[1]);
	char *op = argv[2];
	int num2 = atoi(argv[3]);
	if (op[1] != '\0' || (op[0] != '+' && op[0] != '-' && op[0] != '*' && op[0] != '/' && op[0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	int result = get_op_func(op)(num1, num2);
	printf("%d\n", result);

	return (0);
}
