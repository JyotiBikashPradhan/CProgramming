#include<stdio.h>

int main(){
	int k=3,a[10], i, max, min;
	int *p=a;
	for(i=0;i<10;i++){
		printf("enter elemeent %d :",i+1);
		scanf("%d",a+i);	
	}
	min=max=*p;
	for(i=0;i<10;i++){
		if(*(p+i)>max){
			max= *(p+i);
			
		}
		if(*(p+i)<min){
			min= *(p+i);
		}
	}
	printf("max=%d min=%d",max,min);
	
	
	
	return 1;
}
