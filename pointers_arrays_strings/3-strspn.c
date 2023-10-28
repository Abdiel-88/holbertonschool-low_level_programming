#include "main.h"
#include <stddef.h>

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0; // Initialize the counter
    int i = 0; // Initialize the loop counter

    while (s[i] != '\0') {
        if (strchr(accept, s[i]) != NULL) {
            // The current character from s is in accept, increment the count
            count++;
        } else {
            // The current character from s is not in accept, stop counting
            break;
        }
        i++; // Move to the next character in s
    }

    return count; // Return the count of acceptable characters
}
	
