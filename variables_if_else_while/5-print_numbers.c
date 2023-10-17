#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single-digit numbers in base 10
 * without newlines.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	}

	putchar('\n'); /* Add a newline character to the end */

	return (0);
}
