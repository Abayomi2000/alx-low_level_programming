#include "main.h"

/**
 * print_alphabet_x10.c - print alphabet 10 times in lower case
 * written by abayomi
 */

void print_alphabet_x10(void);
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
