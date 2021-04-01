#include<stdio.h>

int main ()
{
    int i, n, number;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        int testNo;
        scanf("%d", &testNo);
        printf("Case %d:\n", i);

        int j, k;

        for(j = 1; j <= testNo; j++)
        {
            for(k = 1; k<= j; k++)
            {
                printf("%d", k);
            }
            printf("\n");
        }

    }
    return 0;
}
