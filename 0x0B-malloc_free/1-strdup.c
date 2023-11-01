#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string in dynamically allocated memory.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
	char *aaa;
	int i = 0, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; r < i; r++)
		aaa[r] = str[r];

	aaa[r] = '\0';
	return (aaa);
}
