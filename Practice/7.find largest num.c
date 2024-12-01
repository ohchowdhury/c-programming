// Write a C program to find the largest of three numbers. Test Data : 12 25 52

#include <stdio.h>
int main()
{
    int a = 12, b = 2, c = 5;

    if ( a > b )
    {
        if (a > c)
        {
            printf("A is largest");
        }
    }

    else if ( b > c)
    {
        printf("B is Largest");
    }

    else
    {
        printf("C is largest");
    }

    return 0;
}
