#include<stdio.h>

int main(){

    int i,j,s,n=5;

    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            printf(" ");

        }
        int coef=1;
        for(j=1;j<=i;j++){
            printf("%d ", coef);
            coef=coef*(i-j)/j;
        }
        printf("\n");
    }

}