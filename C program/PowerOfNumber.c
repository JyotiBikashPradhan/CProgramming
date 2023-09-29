/*
  	WAP to find power of a number using for loop.
  
  	Enter a number: 2
	Enter exponent: 4
	2 ^ 4 = 16
	
 */

#include <stdio.h>

int main()
{
    int n, exp,  power = 1,i;
  


    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    /* Multiply base, exponent times*/
    for(i=1; i<=exp; i++)
    {
        power = power * n;
    }

    printf("%d ^ %d = %lld", n, exp, power);

    return 0;
}
