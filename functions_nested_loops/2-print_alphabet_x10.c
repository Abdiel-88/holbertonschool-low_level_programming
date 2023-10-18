#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet ten times followed by a new line.
 */
void print_alphabet_x10(void)
{
    char letter = 'a';
    int times = 0;
    
    while (times < 10)
      {
	while (letter <= 'z')
	  {
	    _putchar(letter);
	    letter++;
	  }
      

	_putchar('\n');

	
	letter = 'a';/* Resets letter to "a" for next iteration */
	times++;
      }
}
