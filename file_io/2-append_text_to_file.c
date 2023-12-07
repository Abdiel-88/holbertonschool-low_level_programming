#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t len = 0, written;
if (filename == NULL)
return (-1);
/* Open file in append mode, do not create if it doesn't exist */
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
/* If text_content is NULL, nothing to append */
if (text_content == NULL)
return (1);
/* Write text_content to the file */
while (text_content[len])
len++;
written = write(fd, text_content, len);
if (written == -1 || written != len)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
