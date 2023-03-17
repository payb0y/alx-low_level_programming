#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i, j, k;

    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 9; j++) {
            k = (i * 10) + j;
            putchar((k / 10) + '0');
            putchar((k % 10) + '0');
            if (k < 89) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}

