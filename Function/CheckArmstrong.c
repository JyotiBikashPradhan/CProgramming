/*

  WAP to check armstrong number or not

  371 = (3*3*3)+(7*7*7)+(1*1*1)  
	where:  
	(3*3*3)=27  
	(7*7*7)=343  
	(1*1*1)=1  
	So:  
	27+343+1=371  
  
  Enter a number: 153
  153 is armstrong number



*/
#include<stdio.h>
#include<math.h>


int checkArmstrong(int n){
	int count,rem,sum,flag=1;
	int x=n;
	count=log10(n)+1;
	while(n>0){
		rem=n%10;
		sum=sum+pow(rem,count);
		n=n/10;
	}
	
	if(sum==x){
		printf("%d is armstrong number", x);
	}
	else{
		printf("%d is not a armstrong number", x);
	}
}

int main() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    int res=checkArmstrong(num);
    return 0;
}
