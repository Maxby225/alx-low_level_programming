#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0 success. Error code otherwise
 */
int main(void)
{
int n, e;

n = 48;
e = 48;

while (e < 58)
{
	n = 48;
	while (n < 58)
	{
		if (e != n && e < n)
		{
			putchar(e);
			putchar(n);
			if (n == 57 && e == 56)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	e++;
}
printf("\n");
return (0);
}
