/*

  C program to count digits using recursion.

  Enter a  number: 456132
  Total digits in number 456132 is: 6



*/
 
#include <stdio.h>
 
int countDigits(int num)
{
    static int count=0;
     
    if(num>0)
    {
        count++;
        countDigits(num/10);
    }
    else
    {
        return count;
    }
}
int main()
{
    int number;
    int count=0;
     
    printf("Enter a  number: ");
    scanf("%d",&number);
     
    count=countDigits(number);
     
    printf("Total digits in number %d is: %d\n",number,count);
     
    return 0;
}
