#include "main.h"

/**
 * _islower - check the code in lowercase
 * @c: is the code to check for
 * return: alwas 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
