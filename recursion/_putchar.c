#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (usually the console).
 * @c: The character to be written.
 * Return: The number of characters written (1) or -1 on error.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
