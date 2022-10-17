#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the random number if it is positive_or_negative
 * Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is posive\n", n);
	else if (n > 0)
		printf("%d is negative\n", n);
	else
		printf("% is zero\n", n);
	return (0);
}
