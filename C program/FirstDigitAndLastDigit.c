/*
	WAP to find first and last digit of a number
	
	
	enter a number :5987
	First digit: 5
	Last digit: 7


*/

#include<stdio.h>
int main()
{
	int n,firstDigit,lastDigit ;
	printf("enter a number :");
	scanf("%d" ,&n);
	
	lastDigit = n % 10;
	
	while(n>=10)
	{
		n=n/10;
	}
	firstDigit=n;
	
	printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    
    
	return 0;
	
}

