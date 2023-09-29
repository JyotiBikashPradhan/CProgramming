#include<stdio.h>
#include<math.h>
int main(){
	
	int n,p=0,rem,octal=0;
	printf("Enter a decimal number : ");
	scanf("%d", &n);
	
	while(n>0){
		rem=n%8;
		octal+=rem*pow(10,p);
		p++;
		n=n/8;
	}
	printf("The number is %d ",octal);
	return 1;
}
