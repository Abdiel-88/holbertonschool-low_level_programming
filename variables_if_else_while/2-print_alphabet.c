#include <stdio.h>

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
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
