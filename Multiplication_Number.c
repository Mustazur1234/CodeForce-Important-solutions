#include<math.h>

int main ()
{
    int i, j, n, number;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &number);
        printf("Case %d:\n", i);

        for(j = 1; j <= 10; j++)
        {
            int multiplication = number * j;
            printf("%d * %d = %d\n", number, j, multiplication);
        }
    }

    return 0;
}
