#include <stdio.h>

int main() {
    int n,last, first,digit;
    scanf("%d",&n);
    
    for(int i =1; i <= n;i++)
    {
        int sum =0;
        int num = i;
        while(num != 0)
    {
        digit = num % 10;
        num = num /10;
        sum = sum +digit;
    }
    if(sum %2 ==0)
    {
        printf("%d ",i);
    }
    
    }
    
    return 0;
}