#include <stdio.h>
#include <math.h>
#include "main.h"

int main(void)
{
    long int n = 612852475143;
    long int factor = 2;
    long int largest_factor = 2;

    while (n > 1)
    {
        if (n % factor == 0)
        {
            largest_factor = factor;
            n /= factor;
            while (n % factor == 0)
            {
                n /= factor;
            }
        }
        factor++;
    }

    printf("%ld\n", largest_factor);

    return 0;
}

