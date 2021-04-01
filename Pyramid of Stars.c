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

        //Right Increasing Pyramid
        for(j = 1; j <= testNo; j++)
        {
            for(k = 1; k<= j; k++)
            {
                printf("*");
            }
            printf("\n");
        }

        //Right Decreasing Pyramid (Opposite)
        for(j = testNo; j > 1; j--)
        {
            int temp_TestNo = j;
            for(k = temp_TestNo; temp_TestNo > 1; temp_TestNo--,k--)
            {
                printf("*");
            }
            printf("\n");
        }

    }
    return 0;
}
