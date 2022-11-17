#include "main.h"

/**
 * print_name - function that print name
 * @name: Abayomi is a char type point to name
 * @f: is a pointer function point to pointer
 * Description: is to print a name using pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
