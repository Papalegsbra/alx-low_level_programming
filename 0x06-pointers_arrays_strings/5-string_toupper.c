#include "main.h"
/**
 * string_toupper - change all lower case to uppercase
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[[i] != '\0')
	{
		if (n[i]n >= 'a' && n[i] <= 'r')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
