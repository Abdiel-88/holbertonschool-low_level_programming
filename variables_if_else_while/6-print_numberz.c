#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single-digit numbers in base 10
 * starting from 0, followed by a new line, using putchar only twice.
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
	putchar('\n');

	return (0);
}
