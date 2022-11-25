#include <stdio.h>

void firstfunct(void) __attribute__((constructor));

/**
 * firstfunct - print before the main function's execution
 *
 * Return: void
 */

void firstfunct(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

