#include <stdio.h>

int main()
{
    int i, j;
    int n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 5; j++)
        {

            if (i % 2 == 0)
            {
                if (j == 1)
                {
                    printf(" %d", i + 1);
                }
                else
                    printf(" %d", i);
            }
            else
            {
                if (j == 5)
                {
                    printf(" %d", i + 1);
                    break;
                }
                else
                {
                    printf(" %d", i);
                }
            }
        }
        printf("\n");
    }

    return 0;
}