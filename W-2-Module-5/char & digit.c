#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x>='0' && x<='0')
    {
        printf("DIGIT\n"); 
    }
    else
    {
        printf("ALPHA\n");
        if (x>='a' && x<='z')
        {
            printf("Is Small");
        }
        else
        {
            printf("Is Capital");
        }
    }
  
    return 0;
}