#include <main.h>
#include <string.h>
/**
 * _strcat - fonction that concatenates
 * two strings.
 *
 * @dest: pointer to destnation input.
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a])
		a++;

	for (b = 0; src[b] != 0; b++)
	{
		dest[a] = src[b];
		a += 1;
	}
	dest[a] = '\0';
	return (dest);
}

