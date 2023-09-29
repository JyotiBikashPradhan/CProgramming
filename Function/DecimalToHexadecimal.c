#include <stdio.h>

int convert(int n, int base) {
    int res = 0, p = 1, r;
    while (n > 0) {
        r = n % base;
        res = res + r * p;
        p = p * 10;
        n = n / base;
    }

    return res;
}

void decimalToHexadecimal(int n) {
    char hexadecimal[32] = {0}; // Initialize with null terminators
    int i = 0;

    while (n > 0) { 
        int remainder = n % 16;
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';
        } else {
            hexadecimal[i] = remainder - 10 + 'A';
        }
        n = n / 16;
        i++;
    }

    printf("Hexadecimal: %s\n", hexadecimal);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Binary number is: %d\n", convert(n, 2));
    printf("Octal number is: %d\n", convert(n, 8));
    decimalToHexadecimal(n);

    return 0;
}
