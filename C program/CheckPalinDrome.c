/*
	WAP to check whether a number is palindrome or not.
	
	enter a number :1221
	1221 is palindrome

*/


#include<stdio.h>>

int main(){
	int n, rev=0, rem, num;
	printf("enter a number :");
	scanf("%d", &n);
	num=n;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	
	n=num;
	
	if(rev==n)
	{
		printf("%d is palindrome", n);	
		
	}else{
		printf("%d is not  palindrome", n);	
	}
	
	
	return 0;
}
