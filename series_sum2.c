// 1 − 1/3 + 1/5 − 1/7 + …
// 1-3+5-7+9
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    float sum = 0;
    int sign = 1;

    for (int i = 1; i <= n; i = i + 2)
    {
        sum += sign * (1.00 / i);
        sign = -sign;
    }
    printf("%f", sum);
    return 0;
}