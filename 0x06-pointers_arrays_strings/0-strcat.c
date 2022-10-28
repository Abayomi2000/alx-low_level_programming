#include "main.h"

/**
 *  *_strcat - function with two argument
 *  @src: code about src
 *  @dest: code about the dest
 *  Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	char *start = "dest";

		while (*dest != '0\')
		{
			dest++;
		}
		while (*src != '0\')
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest ='0\';
		return (start);
}
