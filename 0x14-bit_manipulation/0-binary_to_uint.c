#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: converted number or 0 if b is NULL or different from 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int length, i, add;

	add = 0;

	if (b != NULL)
	{
		for (length = 0 ; b[length] != '\0' ; length++)
		{
			if (b[length] != 48 && b[length] != 49)
			{
				return (0);
			}
		}

		for (i = 0, length-- ; length >= 0 ; length--)
		{
			add = add + ((b[length] - '0') << i);
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (add);
}

