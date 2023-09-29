/*

	WAP to print perfect number upto n term .

	A Perfect Number “n”, is a positive integer which is equal to the sum of its factors, excluding “n” itself.

	Enter a range: 1000
    Perfect numbers up to 1000 are: 6 28 496
	

*/



#include <stdio.h>

int isPerfect(int n) {
    int i, sum = 0;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n) {
        return 1;
    }
    else{
         return 0; 
    }
    
    
}

void perfectBetweenRange(int range) {
    printf("Perfect numbers up to %d are: ", range);
    for (int i = 1; i <= range; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n"); 
    
}

int main() {
    int num;

    printf("Enter a range: ");
    scanf("%d", &num);

    perfectBetweenRange(num);

    return 0;
}
