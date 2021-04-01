#include <stdio.h>
#include<math.h>

int main ()
{
    int i, j, n;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        long long int cx, cy, px, py, r, distance;

        scanf("%lld %lld %lld %lld %lld", &cx, &cy, &r, &px, &py);

        distance = sqrt(pow((cx - px), 2) + pow((cy - py), 2));

        if(distance < r)
        {
            printf("Case %d: %s\n", i, "yes");
        }
        else
        {
            printf("Case %d: %s\n", i, "no");
        }
    }
    return 0;
}
