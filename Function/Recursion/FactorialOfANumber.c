/*
 	write a program to calculate factorial of a number
 	
 	Enter the number  to calculate the factorial : 5
	factorial = 120


*/

#include <stdio.h>  

int fact (int);  
int main()  
{  
    int n,f;  
    printf("Enter the number  to calculate the factorial : ");  
    scanf("%d",&n);  
    
    f = fact(n);  
    printf("factorial = %d",f);  
}  
int fact(int n)  
{  
    if (n==0)  
    {  
        return 0;  
    }  
    else if ( n == 1)  
    {  
        return 1;  
    }  
    else   
    {  
        return n*fact(n-1);  
    }  
}  
