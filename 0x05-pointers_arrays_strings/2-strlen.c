#include "main.h"
/**
 *_strlen - returns the length of a string
 *@a: string
 *Return: length
 */
int strlen (char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
