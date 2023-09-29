#include<stdio.h>

int main(){
	
	int n,i;
	printf("enter size of an array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("enter elements of an array: ");
	for(i=0; i<=n;i++){
		scanf("%d", &arr[i]);
	}
	
	printf("array is : ");
	for(i=0; i<=n;i++){
		printf("%d ", arr[i]);
	}
	
	
	
	
	return 0;
}
