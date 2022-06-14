#include "max.h"
/**
 * _puts - pritns a string followed by a new line
 * @str: streng variable
 * Return: Nothing .
 */
void _puts(char *str)
{
	int i;

	for(i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
