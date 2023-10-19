#include "main.h"


void print_to_98(int n)
{
  
  while (n <= 98)
    {
      _putchar(n);
      _putchar(',');
      _putchar(' ');


      if (n != 98)
	{
	  _putchar (',');
	  _putchar(' ');
	}

      n++;

    }
  _putchar('\n');
}
