#include <stdio.h>

int main()
{
  int num;  // Declare the loop variable outside the loop

  for (num = 1; num <= 100; num++)
  {
    // Rest of the code remains the same
    if (num % 3 == 0 && num % 5 == 0)
    {
      printf("FizzBuzz");
    }
    else if (num % 3 == 0)
    {
      printf("Fizz");
    }
    else if (num % 5 == 0)
    {
      printf("Buzz");
    }
    else
    {
      printf("%d", num);
    }
    if (num < 100)
    {
      printf(" ");
    }
  }
  printf("\n");
  return 0;
}

