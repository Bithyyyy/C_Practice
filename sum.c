#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum =0,term =0;
    for(int i =1; i<=n;i++)
    {
        term = term * 10+i;
        sum +=term;
    }
    printf("%d",sum);
    return 0;
}