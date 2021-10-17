#include <stdio.h>

void main() {
    int num1 = 1, num2 = 1;

    while (num1 < 10) {
        while (num2 < 10) {
            printf("%d x %d = %2d\t", num1, num2, num1 * num2);
            printf("\n");
            num2++;
        }
        num2 = 1;
        num1++;
    }
}