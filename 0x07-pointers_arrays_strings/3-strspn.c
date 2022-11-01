#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: contains bytes
 * @accept: char type pointer segment
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i)
}


