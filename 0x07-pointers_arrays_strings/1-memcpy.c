#include "main.h"

/**
 * _memcpy - copy memory area
 * @n: copy to the memory area
 * @src: copy from n to src memory
 * @dest: copy to destination
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		src[a] = dest[a];
	}
	return (dest);
}

