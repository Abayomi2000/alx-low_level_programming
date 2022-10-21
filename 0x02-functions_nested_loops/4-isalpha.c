#include "main.h"

/**
 * _isalpha - prints c in lower or uppercase
 * written by abayomi
 * @c: check char if is upper or lower case
 * Return: 1 if success or otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
