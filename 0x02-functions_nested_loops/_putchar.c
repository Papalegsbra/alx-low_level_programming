#include "main.h"
#include <unistd.h>

/**
 * _putchar - this will write my characters c to stdout
 * @c: The character then to print
 * 
 * on success: Return 1
 * on Error: Return -1 errorno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
