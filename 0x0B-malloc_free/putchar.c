#include "main.h"
#include <unistd.h>
/**
 * _putchar -writes the character c to stdout
 * @: The character to print
 *
 * Reutrn: on Success 1
 * on error, -1 is reutrned, and errno is set appropriately
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
