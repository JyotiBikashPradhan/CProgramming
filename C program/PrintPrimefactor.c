/*
	WAP to find all factors of a number.
	
	Enter the number to print prime factor : 90
	
	Prime factors are:-
	2 3 5
	
*/


//#include<stdio.h>
//
//int main(){
//	
//	int n, i,j;
//	printf("enter a number: ");
//	scanf("%d", &n);
// 	int num=n;
//	 
//	printf("all factors of %d :", n);
//	for(i=1;i<=n;i++){
//		if(n%i==0){
//			
//			int count=0;
//			for(j=1;j<=60;j++){
//				if(i%j==0){
//					count++;
//				}
//			}
//			if(count==2){
//				{
//					printf("%d ", i);
//				}
//			}
//		}
//		
//	}
//	return 0;
//}


#include<stdio.h>

void main()
{
    int i,j,n;
    
    printf("Enter the number to print prime factor : ");
    scanf("%d",&n);
    
    printf("Prime factors are:-\n");    
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0 && n%i==0)
            {
                c++;
            }
        }
         
       if(c==2)
        {
            printf("%d ",i);
        }
    }
}
