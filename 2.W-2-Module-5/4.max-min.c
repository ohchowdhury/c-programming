https://banglaacademy.gov.bd/site/forms/593361e3-e0aa-4e1e-bcbb-28af0400cc3a/%E0%A6%AB%E0%A6%B0%E0%A6%AE%E0%A6%B8%E0%A6%AE%E0%A7%82%E0%A6%B9-%E0%A6%AC%E0%A6%BF%E0%A6%AD%E0%A6%BF%E0%A6%A8%E0%A7%8D%E0%A6%A8-%E0%A6%86%E0%A6%AC%E0%A7%87%E0%A6%A6%E0%A6%A8%E0%A6%AA%E0%A6%A4%E0%A7%8D%E0%A6%B0#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("a=%d is Maximum",a);
    }
    else if (b>=c && b>=a)
    {
        printf("b=%d is Maximum",b);
    }
    else
    {
        printf("C=%d is Maximum",c);
    }
 
    if(a<=b && a<=c)
    {
        printf("a=%d is Minimum",a);
    }
    else if (b<=c && b<=a)
    {
         printf("b=%d is Minimum",b);
    }
    else
    {
         printf("c=%d is Minimum",c);
    }
    


    return 0;
}