#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    int even = 0, odd = 0, pos = 0, neg = 0;
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even++; // even count
        }
        else 

        {
            odd++; // Odd count
        }
        if (a < 0)

        {
            neg+=1; // negative num count
        }
        else
        {
            pos+=1; // Positive NumberCount
        }
    }
    printf("Even:%d\nOdd:%d\nPositive:%d\nNegative:%d\n",even,odd,pos,neg);
}
