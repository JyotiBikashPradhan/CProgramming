/*

    Wap to find nth prime number
    Enter the value of n: 10
    The 10th prime number is: 29




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
    int n;
    int count = 0;
    int candidate = 2; 

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n> 0) {
       
        while (count < n) {
            if (isPrime(candidate)) {
                count++;
                if (count == n) {
                    printf("The %dth prime number is: %d\n", n, candidate);
                    break;
                }
            }
            candidate++;
        }
    }

    return 0;
}
