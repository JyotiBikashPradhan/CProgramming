/*

WAP to print sum of primr number between range

Enter a range: 10
Sum of prime numbers up to 10 is 17

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

int sumOfPrime(int range) {
    int i, sum = 0;
    for (i = 2; i <= range; i++) { 
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int num;

   
    printf("Enter a range: ");
    scanf("%d", &num);

    int res = sumOfPrime(num);

   
    printf("Sum of prime numbers up to %d is %d\n", num, res);

    return 0;
}

