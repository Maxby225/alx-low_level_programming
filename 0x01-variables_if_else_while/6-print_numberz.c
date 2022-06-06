#include <stdio.h>
/**
 * main - Program Entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar(num % 10 + '0');
	}
		putchar('\n');
		return (0);
}
