#include "main.h"

/**
 * main - print all alphabet using lowercase
 * printing by abaomi
 * return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putcher(letter);

	_putcher('\n');
}

