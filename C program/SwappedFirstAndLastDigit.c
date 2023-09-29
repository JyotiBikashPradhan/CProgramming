/*


	WAP to swap first and last digits of a number.
	
	Enter a number: 1234
	Number after swapping first and last digits: 4231

	
	
*/

#include <stdio.h>

int main() {
    int n, num, firstDigit, lastDigit, swap, divisor = 1;

 
    printf("Enter a number: ");
    scanf("%d", &n);

    num = n; 

  
    lastDigit = n % 10;


    while (n >= 10) {
        n /= 10;
        divisor *= 10;
    }
    firstDigit = n;


    swap = lastDigit * divisor + num % divisor;
    swap = swap - lastDigit + firstDigit;

    printf("Number after swapping first and last digits: %d\n", swap);

    return 0;

}
