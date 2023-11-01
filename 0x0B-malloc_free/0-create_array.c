#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of a specific size
 * and initializes it with a char
 * @size: size of the array
 * @c: character to initialize the array
 *
 * Return: Pointer to the created array,
 * or NULL if size is 0 or if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
