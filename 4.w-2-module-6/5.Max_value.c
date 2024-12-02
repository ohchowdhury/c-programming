#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    int a, max = INT_MIN, min = INT_MAX;//for only max value [max=0]
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
        if (a < min)
        {
            min = a;
        }
    }

    printf("Maximum value is: %d\nMinimum value is: %d", max, min);
    return 0;
}
