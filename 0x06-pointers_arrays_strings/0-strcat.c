#include "main.h"

/**
 * _strcat -concates two strings
 * @dest: is input value (destination buffer)
 * @src: is source string
 * Return :pointer to the destination buffer
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int src_length = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	while (src[src_length] != '\0')
	{
		src_length++;
	}

	for (int i = 0; i < src_length; i++)
	{
		dest[dest_length +1] = src[1];
	}

	dest[des_length + src_length] = '\0';

	return dest;
}
