/*
	WAP to print all ASCII character with their values.
	

*/


#include <stdio.h>

int main() {
    printf("ASCII Characters with their Values:\n");
    
    for (int i = 0; i <= 127; i++) {
        printf("ASCII Value: %d, Character: %c\n", i, i);
    }
    
    return 0;
}

