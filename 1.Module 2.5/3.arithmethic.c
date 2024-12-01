#include<stdio.h>
int main()
{
    int a,b;

    scanf("%d%d", &a,&b);

    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    int div = a/b;

    printf("%d+%d=%d\n", a,b,sum);
    printf("%d+%d=%d\n", a,b, sub);
    printf("%d+%d=%d\n", a,b, mul);
    printf("%d+%d=%d\n", a,b,div);


    return 0;
}
