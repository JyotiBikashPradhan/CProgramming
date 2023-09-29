/*
    WAP to set all even bits of binary representation of a number.
    Enter a number: 10
    Number with all odd bits set to 1 :10

*/

#include <stdio.h>

int setEvenBits(int n)
{
    int count = 0;
    int res = 0;

    for (int i = n; i > 0; i >>= 1)
    {

        if (count % 2 != 0)
        {
            res |= (1 << count);
        }
        count++;
    }

    return (n | res);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Number with all odd bits set to 1 :%d\n", setEvenBits(n));
    return 0;
}
