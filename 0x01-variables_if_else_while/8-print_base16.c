#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	int n;
	char c;

	for (n = 48 ; n < 58 ; n++)
	{
		putchar(n);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
		putchar('\n');
		return (0);
}
