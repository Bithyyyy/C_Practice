//14. Print numbers that contain exactly 2 zeroes.
#include <stdio.h>

int main() {
    int n,digit;
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
        int num = i;
        int original = num;
        int countZero=0;
    while(num != 0)
    {
        digit = num % 10;
        num = num/10;
        if(digit == 0)
        {
            countZero +=1;
        }
        
    }
    if(countZero == 2)
    {
        printf("%d ",original);
    }
    
    }
    return 0;
}