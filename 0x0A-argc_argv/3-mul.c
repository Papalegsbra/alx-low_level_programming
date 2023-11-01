#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Multiplies two numbers passed as command-line arguments
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 if successful, 1 if there's an error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int temp;
	int count;
	int i;
	char result_str[20]; /* Assuming the result won't exceed 20 characters */

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	if (argc != 3)

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	if (result < 0)
	{
		_putchar('-');
		result *= -1;
	}

	if (result == 0)
		_putchar('0');
	else
	{
		temp = result;
		count = 0;


		while (temp > 0)
		{
			temp /= 10;
			count++;
		}

		for (i = 0; i < count; i++)
		{
			int digit = result / (int)pow(10, count - i - 1);
			result_str[i] = digit + '0';
			result -= digit * (int)pow(10, count - i - 1);
		}
		result_str[count] = '\0';

		for (i = 0; result_str[i]; i++)
		{
			_putchar(result_str[i]);
		}
	}

	_putchar('\n');
	return (0);
}
