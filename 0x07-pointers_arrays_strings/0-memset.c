#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *@n: fill the first memory
 *@s: byte of the memory
 *@b: constant byte of the memory
 *Return: s pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		[s] = b;
	}
	return (s);
}

