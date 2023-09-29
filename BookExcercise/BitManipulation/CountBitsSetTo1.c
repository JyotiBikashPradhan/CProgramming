/*
    WAP to count bits set to 1 in an 8 bit number(unsigned char)

    Enter an 8-bit number (0-255): 30
    The number of bits set to 1 in 30 is: 4
*/

#include <stdio.h>

int countSetBits(unsigned char num) {
    int count = 0;
    
    for (int i = 0; i < 8; i++) {
        if ((num & (1 << i)) != 0) {
            count++; 
        }
    }
    
    return count;
}

int main() {
    unsigned char num;
    
    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);
    // scanf("%d", &num);  
    
    if (num < 0 || num > 255) {
        printf("Invalid input. Please enter an 8-bit number (0-255).\n");
    } else {
        int bitCount = countSetBits(num);
        
        printf("The number of bits set to 1 in %d is: %d\n", num, bitCount);
    }
    
    return 0;
}
