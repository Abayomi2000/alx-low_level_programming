#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: check for number
 * Return: 1 if positive, 0 if zero -1 if negative, / if not a digit
 * written by abayomi
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
