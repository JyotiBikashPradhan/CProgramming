/*
    Wap to find largest power of 2(most significant bits in binary representaton ) which is lessthan or equal to number.

*/

#include <stdio.h>

int largestPowerOf2(int num) {
    int result = 1; 

    while (result <= num) {
        result <<= 1; 
    }

    
    return result >> 1;
}

int main() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    int largestPower = largestPowerOf2(num);

    printf("The largest power of 2 less than or equal to %d is %d\n", num, largestPower);

    return 0;
}
