/*

	Print prime numbers upto range
	
	Enter a range: 100
	prime numbers upto 100 are 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
	

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

int primeBetweenRange(int range){
	int i=0;
	for(i=0;i<=range;i++){
		if(isPrime(i)){
			printf("%d ",i);
		}
	}
}

int main() {
    int num;

    
    printf("Enter a range: ");
    scanf("%d", &num);

    printf("prime numbers upto %d are ", num);
    int res=primeBetweenRange(num);
    return 0;
}

