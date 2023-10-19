#include "main.h"

/**
 * _strncat - concatenates two strings
 * it will use most of the n bytes from src
 * @dest: is a input value
 * @src : is a input value
 * @n: input value
 *  Return: a pointer to the destination buffer (dest)
 */
char *_strncat(char *dest, char *src, int n);
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
