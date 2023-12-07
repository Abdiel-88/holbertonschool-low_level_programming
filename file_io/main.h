#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>

/* Function Prototypes */

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print, or 0 if fails.
 */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
