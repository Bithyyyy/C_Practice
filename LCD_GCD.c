#include <stdio.h>

int main()
{
    int l, s, r;
    scanf("%d %d", &l, &s);
    while (l % s != 0)
    {
        r = l % s;
        l = s;
        s = r;
    }
    printf("GCD is %d ",s);
    
    return 0;
}