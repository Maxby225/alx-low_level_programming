#include "max.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string
 * Return :Integer the length of a string
 */
int _strlen(char *s)
{
	int longer = 0;
	while (*s != '\0')
	{
		s++;
		longer++;
	}
	return (longer);
}
