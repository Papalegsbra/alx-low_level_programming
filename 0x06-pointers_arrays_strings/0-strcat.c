#include "main.h"

/**
 * _strcat -concates two strings
 * @dest: is input value (destination buffer)
 * @src: is source string
 * Return :pointer to the destination buffer
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
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
