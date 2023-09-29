/*

  WAP to c print armstrong number upto n range

  371 = (3*3*3)+(7*7*7)+(1*1*1)  
	where:  
	(3*3*3)=27  
	(7*7*7)=343  
	(1*1*1)=1  
	So:  
	27+343+1=371  
  
  Enter a range to show armstrong number : 500
  1 2 3 4 5 6 7 8 9 153 370 371 407



*/
#include<stdio.h>
#include<math.h>


int checkArmstrong(int n){
	int count,rem,sum=0;
	int x=n;
	count=log10(n)+1;
	while(n>0){
		rem=n%10;
		sum=sum+pow(rem,count);
		n=n/10;
	}
	
	if(sum==x){
        return 1;
	}
	else{
		return 0;
	}
}

void printArmstrongNumber(int range){
	int i;
	for(i=1;i<=range;i++){
		if(checkArmstrong(i)){
			printf("%d ",i);
		}
	}
}

int main() {
    int num;

    
    printf("Enter a range to show armstrong number : ");
    scanf("%d", &num);

    printArmstrongNumber(num);
    return 0;
}
