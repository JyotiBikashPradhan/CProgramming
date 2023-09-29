#include <stdio.h>
#include <math.h>

int octalToDecimal(int n){
    int rem, decNo=0,p=0;
    while(n>0){
        rem=n%10;
        decNo+=rem*pow(8,p);
        p++;
        n=n/10;
    }
    return decNo;
}

int main()
{
 
    int n;
    printf("Enter an octal number : ");
    scanf("%d", &n);

    printf("Corresponding Decimal number is : %d",octalToDecimal(n));
    
    return 1;
}
