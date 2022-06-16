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
	int a, b;

	a = 0;
	/*find the size of dest array*/
	while (dest[a])
		a++;
	/*iterate trough each src array value without the null byte*/
	for (b = 0; src[b] != 0; b++)
	/* apprend src[b] to dest[a] while over writting the null byte in dest*/
	{
		dest[a++] = src[b];
		a += 1;
	}
	dest[a] = '\0';
	return (dest);
}

