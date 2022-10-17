#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print random number for the last digit
 * Return: 0 if success
 */
int main(void)
{
	int n;
        int x;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
        x = n % 10;
	printf("Last digit of %d is", x);
	if (x > 5)
		printf("%d and is greater than 5\n", x);
	else if (x < 6 && x != 0)
		printf("%d and is less than 6 and not 0\", x);
	else printf("%d and is 0", x);
	return (0);
}
