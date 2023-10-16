#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry Point of the program
 *
 * Description: This function generates a random number and
 * prints whether it's positive, zero, or negative.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit = n % 10

	if (last_digit > 5)
	{
	  printf("Last digit of", n, "is" last_digit "and is greater than 5/n");
	}
	else if (last_digit  == 0)
	{
		printf("Last digit of", n, "is" last_digit "and is 0\n");
	}
	else
	{
		printf("Last digit of", n, "is" last_digit "and is ess than 6 and not 0\n");
	}

	return (0);
}
