#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - creates a file with specified content.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t len = 0, written;
if (filename == NULL)
return (-1);
/* Create file with rw------- permissions, truncate if exists */
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
/* If text_content is not NULL, write it to the file */
if (text_content != NULL)
{
while (text_content[len])
len++;
written = write(fd, text_content, len);
if (written == -1 || written != len)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
