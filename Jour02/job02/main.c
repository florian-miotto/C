#include <stdio.h>
#include <stdlib.h>

int my_mul(int a, int b) {
    return a * b;
}

int my_add(int a, int b) {
    return a + b;
}

int my_sub(int a, int b) {
    return a - b;
}

int my_div(int a, int b) {
    if (b == 0) {
        return -1; // error
    } else {
        return a / b;
    }
}

int my_mod(int a, int b) {
    return a % b;
}

int main() {
    int a, b;
    printf("tapper un nombre a : ");
    scanf("%d", &a);
    printf("tapper un nombre b : ");
    scanf("%d", &b);

    printf("a * b = %d\n", my_mul(a, b));
    printf("a + b = %d\n", my_add(a, b));
    printf("a - b = %d\n", my_sub(a, b));
    printf("a / b = %d\n", my_div(a, b));
    printf("a %% b = %d\n", my_mod(a, b));

    return 0;
}
