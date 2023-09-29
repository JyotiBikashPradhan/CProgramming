#include<stdio.h>
int main(){
	int n,even=0,odd=0, rem;
	printf("enter a number :");
	scanf("%d",&n);
	while(n>0){
		rem=n%10;
		if(rem%2==0){
			
			even++;
			
		}
		else
		{
			odd++;
			
		}
		n=n/10;
	}
	printf("no of evens are :%d\n",even);
	printf("no of odd are :%d\n",odd);
	return 0;
}
