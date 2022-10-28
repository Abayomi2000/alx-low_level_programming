#include "main.h"

/**
 * *_strncat - function with two argument
 * @n: written by abayomi
 * @dest: code for dest
 * @src: code for src
 * Description: concatenate two sring
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '0\')
	{
		i++;
	}
	while (j < n && src[j] != '0\')
	{
		dest[i] = drc[j];
		j++;
		i++;
	}
	return (dest);
}


