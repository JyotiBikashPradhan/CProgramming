/*
	WAP to check perfect number or not .

	A Perfect Number “n”, is a positive integer which is equal to the sum of its factors, excluding “n” itself.
	
	enter a number: 28
	28 is a perfect number
	
*/

#include<stdio.h>

int main(){
	
	int n, i, sum=0;
	printf("enter a number: ");
	scanf("%d", &n);
	

	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
		
	}
	
	if(sum==n){
		printf("%d is a perfect number",n);
	}
	
	else{
		printf("%d is not a perfect number",n);
	}
	return 0;
}

