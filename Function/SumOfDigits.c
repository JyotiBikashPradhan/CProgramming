#include<stdio.h>

int sumOfDigits(int n)
{
	int rem, sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	return sum;
}

int main()
{
	int n;
	printf("enter a number: \n");
	scanf("%d", &n);
	int r=sumOfDigits(n);
	printf("sum is %d", r);
	return 0;
	
}
