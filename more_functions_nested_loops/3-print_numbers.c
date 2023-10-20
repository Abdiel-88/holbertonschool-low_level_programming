#include "main.h"

void print_numbers(void)
{
  int number = 0;

  while (number <= 9)
    {
      _putchar('0' + number);
      number++;
    }
  _putchar('\n');
}
