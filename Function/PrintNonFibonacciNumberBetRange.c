#include <stdio.h>


void generateFibonacci(int limit, int fibonacci[]) {
    int a = 0, b = 1, c = 0;
    while (c <= limit) {
        fibonacci[c] = 1; 
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int lower, upper;

    printf("Enter the lower range: ");
    scanf("%d", &lower);

    printf("Enter the upper range: ");
    scanf("%d", &upper);

    int fibonacci[upper + 1];
    generateFibonacci(upper, fibonacci);

    printf("Non-Fibonacci numbers between %d and %d are: ", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (fibonacci[i] != 1) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
