#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("The number: %d\n", n);

    if (n > 0) {
      printf("is positive\n", n);
    } else if (n == 0) {
      printf("is zero\n", n);
    } else {
      printf("is negative\n", n);
    }

    return (0);
}
