#include <stdio.h>
int main()
{
    char a;
    scanf("%c", a);
    if (a >= 'a' && a <= 'z')
    {
        int ans = a - 32; // lowercase char
        printf("%c", ans);
    }
   else
    {
        int ans = a + 32; // Uppercase char
        printf("%c", ans);
    }

    return 0;
}
///// ASCII Value niye kaj korte hode
//// 65-90(A-Z), 97-122(a-z)