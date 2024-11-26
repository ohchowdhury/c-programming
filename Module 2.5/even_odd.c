#include <stdio.h>
int main()
{
    int a;

    scanf("%d", &a);
    if (a % 2 == 0) // if main point is ture or False
    {
        printf("Output is Even Number: %d", a);
    }
    else
    {
        printf("Output is Odd Number: %d", a);
    }

    return 0;
}
