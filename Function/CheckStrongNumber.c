
/*
	WAP to check whether a number is strong number or not.

	Enter a number: 145
    145 is a strong number
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
        printf("%d is a strong number\n", n); 
    } else {
        printf("%d is not a strong number\n", n); 
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    isStrong(num);

    return 0;
}
