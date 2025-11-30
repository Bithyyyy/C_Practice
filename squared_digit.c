//16. Print numbers where the sum of squared digits is divisible by 9.
#include <stdio.h>

int main() {
    int n,digit;
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
        int first,last;
        int num = i;
        int original = num;
        int sum =0;

    while(num != 0)
    {
        digit = num % 10;
        num = num/10;
        sum += digit * digit;  
        
    }
    if(sum % 9 == 0)
    {
        printf("%d ",original);
    }
    
    }
    return 0;
}