#include<stdio.h>

int main(){
	int n, i, *p,sum=0 ;
	int avg;
	
	printf("enter size of an array :");
	scanf("%d", &n);
	
	p=(int *)malloc(n*sizeof(int));
	
	printf("enter elements: ");
	for(i=0;i<n;i++){
		scanf("%d",p+i);
		
		sum=sum+ *(p+i);
	}
	
	avg=(float)sum/n;
	printf("sum is %d avg is %d", sum,avg);
	return 0;
}
