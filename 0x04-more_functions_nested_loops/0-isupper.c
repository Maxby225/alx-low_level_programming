#include <main.h>
/**
 * _isupper - write a function that cheks for uppercase character
 * @c: thecaracter to print
 *
 * Return: On sucess 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

