#include<stdio.h>


int main(){
	
	int n=10,i;
    int arr[n];

	printf("Enter 10 numbers : \n");
    for(i=0; i<n; i++){
        printf("Enter element%d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0; i<10; i++){
        printf("%d, ",arr[i]);
    }


	return 1;
}
