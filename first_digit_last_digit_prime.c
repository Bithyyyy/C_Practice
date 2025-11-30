#include <stdio.h>

int main() {
    int num ,last, first,digit;
    scanf("%d",&num);
    last = num %10;
    while(num != 0)
    {
        digit = num % 10;
        num = num /10;
    }
    first = digit;
    
    return 0;
}