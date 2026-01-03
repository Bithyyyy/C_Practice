//1-3+5-7+9
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum = 0;
    int sign = 1;

    for(int i=1;i<=n;i=i+2)
    {
        sum += sign * i;
        sign = -sign;
    }
    printf("%d",sum);
    return 0;
}