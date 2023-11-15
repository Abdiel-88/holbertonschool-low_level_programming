#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a given print function.
 * @name: The name to print.
 * @f: A pointer to a function that takes a char* (string) and returns nothing.
 *
 * Description: This function takes a string and a function pointer.
 *              It calls the function pointed to by 'f', passing 'name' as
 *              an argument to that function. The function pointed to by 'f'
 *              should handle the actual printing of the name.
 */
void print_name(char *name, void (*f)(char *)) {
    // Check if the name and the function pointer are not NULL
    if (name != NULL && f != NULL) {
        f(name); // Call the function pointed to by 'f' with 'name' as its argument
    }
}

/**
 * print_to_console - Prints a string to the console.
 * @str: The string to print.
 *
 * Description: This function takes a string and prints it to the console.
 */
void print_to_console(char *str) {
    printf("%s\n", str); // Simply prints the string to the console
}

int main() {
    char *name = "Alice";
    print_name(name, print_to_console); // This will print "Alice" to the console

    return 0;
}
