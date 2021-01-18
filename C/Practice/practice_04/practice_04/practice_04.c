#include<stdio.h>

int main(void) {
    int i = 100, result = 0;

    for (i = 100; i >= 0; i--) {
        result = result + i;
    }
    printf("%d", result);
}