#include <stdio.h>

double sqroot(int n)
{
    double l = 0, h = n / 2, m;
    while (h - 1 > 0.000001f)
    {
        m = (l + h) / 2.0f;

        if (m * m > n)
        {
            h = m;
        }
        else
        {
            l = m;
        }
    }
    return m;
}

int main()
{
    int n;
    printf("enter a number to get square root: ");
    scanf("%d", &n);
    double r = sqroot(n);
    printf("square root of a %d is %f", n, r);

    return 0;
}
