#include  "main.h"

/**
 * *_strncpy - function that copy a string
 * @dest: first char pointer
 * @src: second char pointer
 * @n: third chsr pointer
 * Descriptin: copy a string
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
		return (dest);
}
