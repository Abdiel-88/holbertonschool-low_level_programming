#include <stdio.h>
/**
 * main - Entry point, prints the name of the program
 * @argc: Argument count
 * @argv: Argument vector.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
if(argv[0] != NULL)
{
printf("%s\n",argv[0]);
}
return (0);
}
