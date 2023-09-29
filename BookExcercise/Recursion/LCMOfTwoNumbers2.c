#include<stdio.h>

int main(){
	int a,b,i, flag=1;
	
	printf("enter two number :");
	scanf("%d%d",&a,&b);
	
	int max=a>b?a:b;
	
	while(flag){
		if(max%a==0 && max%b==0){
			printf("LCM of %d and %d is %d ", a,b,max);
			break;
		}
		max++;
	}
	
	
	
}
