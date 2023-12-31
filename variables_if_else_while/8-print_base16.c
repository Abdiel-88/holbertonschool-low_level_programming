#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all the numbers of base 16
 * in lowercase, followed by a new line, using putchar only three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
