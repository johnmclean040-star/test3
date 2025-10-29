/*
 * main.c
 * Demonstration of Make Utility using mathutils library
 * ENGG*1410 - Fall 2025
 */

#include <stdio.h>
#include "mathutils.h"

int main(void) {
    int x = 10;
    int y = 5;

    printf("Make Utility Demo Program\n");
    printf("=========================\n");

    printf("%d + %d = %d\n", x, y, add(x, y));
    printf("%d - %d = %d\n", x, y, subtract(x, y));
    printf("%d * %d = %d\n", x, y, multiply(x, y));
    printf("%d / %d = %.2f\n", x, y, divide(x, y));

    return 0;
}
