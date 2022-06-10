#include <main.h>
/**
 * print_numbers - checks prints the numbers, from 0 to 9
 * followed a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}

	_putchar ('\n');
}
