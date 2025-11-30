//5. Print all numbers whose reverse is greater than the original number.
#include <stdio.h>

int main() {
    int n,digit;
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
        int num = i;
        int original = num;
        int reverse=0;
    while(num != 0)
    {
        digit = num % 10;
        num = num/10;
        reverse = reverse *10 +digit;
    }
    if(reverse > original)
    {
        printf(" %d",original);
    }
    
    }
    return 0;
}