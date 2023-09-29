/*
   WAF to convert decimal to binary as well as octal

  enter a number: 10
  binary number is: 1010
  octal number is: 12

*/



#include<stdio.h>

int convert(int n,int base){
	int res=0,p=1,r;
	while(n>0){
		r=n%base;
		res=res+r*p;
		p=p*10;
		n=n/base;
	}
	
	return res;
}


int main(){

	int n;
	
	printf("enter a number: ");
	scanf("%d",&n);
	
	printf("binary number is: %d\n",convert(n,2));
	printf("octal number is: %d",convert(n,8));
	
	return 0;
	 
}
