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
	int len = 0, b;

	while (dest[len])
		len++;

	for (b = 0; src[b] != 0; b++)
	{
		dest[len] = src[b];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}

