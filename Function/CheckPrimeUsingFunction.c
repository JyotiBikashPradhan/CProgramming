
/*
	WAP to check whether a number is prime or not.

	Enter a number: 121
    121 is not a prime number.
*/
	


#include <stdio.h>
#include <stdbool.h>
#include <math.h>


bool isPrime(int n) {
	
	int i;
    if (n <= 1) {
        return false;
    }
    for (i = 2; i <= sqrt(n); i++) { 
        if (n % i == 0) {
            return false; 
        }
    }
    return true;
}

int main() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

