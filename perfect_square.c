//7. Print numbers where the difference between first and last digit is a perfect square.
#include <stdio.h>

int main() {
    int n,digit;
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
        int first,last;
        int num = i;
        int original = num;
        last = num % 10;

    while(num != 0)
    {
        digit = num % 10;
        num = num/10;
        
    }
    first = digit;
    int diff = first -last;
    if(diff < 0)
    {
        diff = -diff;
    }
    for(int j= 1;j*j<= diff;j++)
    {
        if(j*j == diff)
        {
            printf(" %d",original);
        }
    }
    
    }
    return 0;
}