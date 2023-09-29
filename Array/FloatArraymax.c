#include<stdio.h>

int main(){
	
	int n,i;
	printf("enter size of an array: ");
	scanf("%d", &n);
	
	float arr[n];
	printf("enter elements of an array: ");
	for(i=0; i<n;i++){
		scanf("%f", &arr[i]);
	}
	
	printf("array is : ");
	for(i=0; i<n;i++){
		printf("%f ", arr[i]);
	}
	printf("\n");
	float max=arr[0];
	for(i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	
		printf("max value of an array: %f ",max);
	
	
	
	
	return 0;
}
