//13. Print numbers where the second last digit is greater than the last digit.

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
        int secondLast = (num / 10) % 10; 

        if(secondLast > last)
        {
            printf("%d ",original);
        }
    }
    return 0;
}