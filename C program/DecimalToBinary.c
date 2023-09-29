#include<stdio.h>

int main(){
	int n,d, p=1,s=0;
	printf("Enter a number");
	scanf("%d",&n);
	while(n>0){
		d=n%2;
		s=s+d*p;
		p=p*10;
		n=n/2;
	}
	printf("%d",s);
	return 0;
}
