#include "main.h"

/**
 * print_alphabet_x10 - print alphabet lowercase
 *
 * Return: Always 0.
*/

void print_alphabet_x10(void)
{
	char alphabet;
	int compte = 0;

	while (compte < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);

			compte++
			_putchar('n')
		}
	}

}
