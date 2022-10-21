#include "main.h"

/**
 * print_alphabet - print all alphabet using lowercase
 * printing by abayomi
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putcher(letter);

	_putcher('\n');
}

