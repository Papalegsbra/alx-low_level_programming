#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination buffer.
 * @src: The source string to append to dest.
 *
 * Return: A pointer to the destination buffer (dest).
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[dest_length + i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
