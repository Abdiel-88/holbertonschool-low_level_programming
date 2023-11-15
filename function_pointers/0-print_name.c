#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using a given print function.
 * @name: The name to print.
 * @f: A pointer to a function that takes a char* (string) and returns nothing.
 *
 * Description: This function takes a string and a function pointer.
 * It calls the function pointed to by 'f', passing 'name' as
 * an argument to that function. The function pointed to by 'f'
 * should handle the actual printing of the name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
