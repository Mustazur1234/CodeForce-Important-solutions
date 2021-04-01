#include <stdio.h>

int main ()
{
    int i, j, n;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        int n1, n2, n3, max_number = 0;
        scanf("%d %d %d", &n1, &n2, &n3);

        if(n1 >= n2 && n1 >= n3)
        {
            max_number = n1;
        }

        if(n2 >= n1 && n2 >= n3)
        {
            max_number = n2;
        }

        if(n3 >= n1 && n3 >= n2)
        {
            max_number = n3;
        }

        if(n3 == n2 == n1)
        {
            max_number = n3;
        }

        printf("Case %d: %d\n", i+1, max_number);

    }

    return 0;
}
