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
	    dest[dest_length + i] = src[i]
    }
    dest[dest_length + src_length] = '\0';

    return dest;
}
