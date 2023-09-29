/*
	WAP to print strong number between range 1 to N .
	
	Enter a range to find strong numbers: 10000
    Strong numbers from 1 to 10000: 1 2 145
	
*/



#include <stdio.h>

int fact(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int isStrong(int n) {
    int k = n;
    int sum = 0;

    while (k > 0) {
        int rem = k % 10;
        int res = fact(rem);
        k = k / 10;
        sum = sum + res;
    }

    if (sum == n) {
        return 1;
    } else {
        return 0; 
    }
}

void printStrongNumbers(int range) {
    int i;
    printf("Strong numbers from 1 to %d: ", range);
    for (i = 1; i <= range; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int range;
    printf("Enter a range to find strong numbers: ");
    scanf("%d", &range);

    printStrongNumbers(range);

    return 0;
}
