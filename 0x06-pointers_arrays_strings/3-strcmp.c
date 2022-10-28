#include "main.h"

/**
 *  _strcmp - function that compares two sring
 *  @s1: fisrt argument
 *  @s2: 2d argument
 *  Description: compare two sreing
 *  Return: 0 for same string, other for not same
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
