#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000) // if normally find out "ture(means 1) or False(means 0)"
    {
        printf("Cox's Bazar jabo\n");

        if (tk >= 10000)
        {
            printf("Santmartin jabo\n");
        }

        if (tk >= 1000)
        {
            printf("Ice cream Kabo\n");
        }
    }

    else
    {
        printf("Back to Dhaka\n");
    }

    return 0;
}