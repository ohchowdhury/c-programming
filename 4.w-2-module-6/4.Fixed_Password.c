#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)

    {
        if (n == 1998)
        {
            printf("Correct Password\n");
            break;
        }
        else
        {
            printf("wrong Password,try again\n");
        }
    }

    return 0;
}