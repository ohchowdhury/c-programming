#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int f = 1; f <= test; f++)
    {
        int n;
        scanf("%d", &n);
        do
        {
            printf("%d", n % 10);
            n = n / 10;
        }

        while (n != 0);
        printf("\n");
    }

    return 0;
}
