//3. Print numbers where (first digit × last digit) < 20.
#include <stdio.h>

int main() {
    int n ,last, first,digit;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int num =i;
        last = num %10;
        while(num != 0)
        {
            digit = num % 10;
            num = num /10;
        }
        first = digit;
        if(last*first <20)
        {
            printf(" %d",i);
        }
        }
        
    
    
    return 0;
}