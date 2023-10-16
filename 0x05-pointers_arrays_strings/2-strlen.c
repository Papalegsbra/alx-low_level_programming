#include main.h
/**
 * _puts -prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	*str++;
	}
	_putchar('\n');
}

int main ()
{
	char myString [] = " Testing my first string!";
	_puts(myString);

	return 0;
}
