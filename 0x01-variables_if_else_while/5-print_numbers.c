#include <stdio.h>

/**
 * main - script that prints single digit num
 *
 *
 */
int main(void) {
    int num;

    for (num = 0; num < 10; num++) {
        putchar('0' + num);
    }

    putchar('\n');

    return 0;
}
