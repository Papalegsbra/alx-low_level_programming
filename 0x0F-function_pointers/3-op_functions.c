#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Retur,s the sum of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of two numbers
 * @a: is the first number
 * @b: is the second number
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of two numbers
 * @a: is the first number
 * @b: is the second number
 *
 * Return: th eproduct of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result a divided by b
 *
 * @a: is the dividend
 * @b: is the divisor
 *
 * Return: the quotient of a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of a by b
 *
 *@a: the dividend
 *@b: the divisor
 *
 * Return: the remainder of the division of a and b
 *
 *
 */
int op_mod(int a, int b)
{
	return (a % b);
}
