#include<stdio.h>


int findMax(int *p, int n){
	int j, max=p[0];
	for(j=1;j<n;j++){
		if(*(p+j)>max){
			max=*(p+j);
		}
	}
	return max;
}

int main(){
	int k=3,a[5], i, max, min;
	int p=a;
	for(i=0;i<5;i++){
		printf("enter elemeent %d ",i+1);
		scanf("%d",a+i);	
	}
	max=findMax(a,5);
	

	printf("max=%d",max);
	
	
	
	return 1;
}
